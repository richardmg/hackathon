#ifndef CODEBEHIND_H
#define CODEBEHIND_H

#include <QObject>
#include <QDebug>

class MyRectangleCodeBehind : public QObject
{
    Q_OBJECT

public slots:

    void on_myRectangle_widthChanged()
    {
        qDebug() << "CALLED";
    }
};

#endif // CODEBEHIND_H
