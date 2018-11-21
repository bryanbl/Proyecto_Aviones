#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsItem>

class Enemigo: public QObject,public QGraphicsRectItem  {
    Q_OBJECT
public:
    Enemigo();
public slots:
    void movEnemigo();
};


#endif // ENEMIGO_H

