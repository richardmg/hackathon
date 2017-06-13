#ifndef QGLOBALEXT_H
#define QGLOBALEXT_H

#include <QtCore/QtCore>

#define Q_CODEBEHIND(ID) \
    ID##_ui &ui() \
    { \
        static ID##_ui ui(property(QT_STRINGIFY(ID)).value<QObject *>()); \
        return ui; \
    }

#define Q_CODEBEHIND_REGISTER(TYPE, ID) \
extern QHash<QString, QObject *> qqmlcodeBehindList; \
namespace { \
    class CodeBehindReg \
    { \
        static CodeBehindReg codeBehindRegister; \
        explicit CodeBehindReg() \
        { \
            QString id(QLatin1String(ID)); \
            qqmlcodeBehindList.insert(id, new TYPE()); \
        } \
    }; \
    CodeBehindReg CodeBehindReg::codeBehindRegister; \
}

#endif // QGLOBALEXT_H
