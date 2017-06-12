#ifndef CODEBEHIND_H
#define CODEBEHIND_H

#include "qglobalext.h"

#include <QObject>
#include <QDebug>

class MyRectangleCodeBehind : public QObject
{
    Q_OBJECT
    Q_CODEBEHIND(Root)

public slots:

    void on_myRectangle_widthChanged()
    {
        QObject *myRectangle = Root()->findChild<QObject *>("myRectangle");
        qDebug() << "Width changed:" << myRectangle->property("width");

        QObject *myText = Root()->findChild<QObject *>("myText");
        myText->setProperty("text", "Clicked");
    }

    void doSomething()
    {
        qDebug() << "Do something called";
    }
};

#endif // CODEBEHIND_H
