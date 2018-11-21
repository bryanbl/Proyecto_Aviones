#include "Balas.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "Enemigo.h"
#include "Juego.h"

#include <QDebug>

extern Juego * juego;

Balas::Balas(): QObject(), QGraphicsRectItem()
{
    //Se dibuja en la bala en la rectangulo
    setRect(0,0,10,40);

    //
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(movBala()));

    timer -> start(50);

}

void Balas::movBala()
{
    //Destruyo los al enemigo y la bala cuando los objetos colicionan
    QList<QGraphicsItem *>colicion_items =collidingItems();
    for (int i = 0, n = colicion_items.size(); i < n; ++i)
        if (typeid(*(colicion_items[i]))== typeid(Enemigo)){

            //Quito los 2 items
            scene()->removeItem(colicion_items[i]);
            scene()->removeItem(this);

            //aumento el puntaje
            juego->puntaje->incrementa();

            //libero
            delete colicion_items[i];
            delete this;
        }

    //Movimiento de las balas hacia arriba
    setPos(x(),y()-10);
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
        //qDebug()<<"bala fuera";
    }

}
