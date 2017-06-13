#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "qglobalext.h"

#include <QObject>
#include <QDebug>
#include <QColor>

#include "spaceship.ui.h"

class Spaceship : public QObject
{
    Q_OBJECT
    Q_CODEBEHIND(spaceship)

public slots:

    void on_colorRect_colorChanged()
    {
        QColor c = ui().colorRectangle->property("color").value<QColor>();
        qDebug() << "color changed to" << c;
    }

    void setRandomColor()
    {
        QColor color = QColor::fromRgb(
                    255 * ((double)qrand() / RAND_MAX),
                    255 * ((double)qrand() / RAND_MAX),
                    255 * ((double)qrand() / RAND_MAX));

        ui().colorRectangle->setProperty("color", color);
    }

};

#endif // SPACESHIP_H
