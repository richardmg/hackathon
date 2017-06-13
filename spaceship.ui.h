#ifndef SPACESHIP_UI_H
#define SPACESHIP_UI_H

#include <QtCore/QtCore>

struct spaceship_ui {
public:
    spaceship_ui(QObject *o)
    {
        Q_ASSERT(o);
        spaceship = o;
        colorRectangle = o->findChild<QObject *>("colorRect");
        Q_ASSERT(colorRectangle);
    }

    QObject *spaceship;
    QObject *colorRectangle;
};

#endif // SPACESHIP_UI_H
