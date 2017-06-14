#ifndef QGLOBALEXT_H
#define QGLOBALEXT_H

#include <QtCore/QtCore>

// Use Q_CODEBEHIND(ID) if you want something else that the class name as look-up ID
#define Q_CODEBEHIND_WITH_ID(ID) \
    template <class T = QObject *> \
    QObject *ui(const char *objectName) \
    { \
        static QObject *root = property(QT_STRINGIFY(ID)).value<QObject *>(); \
        return root->findChild<T>(objectName); \
    }

// Use Q_CODEBEHIND(ID) if you want the class name as look-up ID
#define Q_CODEBEHIND \
    template <class T = QObject *> \
    QObject *ui(const char *objectName) \
    { \
        static QObject *root = property(metaObject()->className()).value<QObject *>(); \
        return root->findChild<T>(objectName); \
    }

#define Q_CODEBEHIND_REGISTER(ID) \
extern QHash<QString, QObject *> qqmlcodeBehindList; \
namespace { \
    class CodeBehindReg \
    { \
        static CodeBehindReg codeBehindRegister; \
        explicit CodeBehindReg() \
        { \
            QString id(QLatin1String(QT_STRINGIFY(ID))); \
            qqmlcodeBehindList.insert(id, new ID()); \
        } \
    }; \
    CodeBehindReg CodeBehindReg::codeBehindRegister; \
}

#endif // QGLOBALEXT_H
