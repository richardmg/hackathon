#ifndef SPACESHIP_UI_H
#define SPACESHIP_UI_H

#include <QtCore/QtCore>

struct Spaceship_ui {
public:
    Spaceship_ui(QObject *o)
    {
        Q_ASSERT(o);
        Spaceship = o;
        colorRectangle = o->findChild<QObject *>("colorRect");
        Q_ASSERT(colorRectangle);
    }

    QObject *Spaceship;
    QObject *colorRectangle;
};

#endif // SPACESHIP_UI_H
