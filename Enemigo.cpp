#include "Enemigo.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "Juego.h"

#include <stdlib.h>//Me arroja un numero random de entero con la fucion rand()


extern Juego * juego;

Enemigo::Enemigo(): QObject(), QGraphicsRectItem()
{
    //Me ubico en una posicion cualquiera en x
    int random_numero = rand()%700;
    setPos(random_numero,0);

    //Se dibuja en la bala en la rectangulo
    setRect(0,0,100,100);

    //Realiza el movimiento del enemigo
    QTimer * timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(movEnemigo()));

    timer -> start(50);

}

void Enemigo::movEnemigo()
{
    //Movimiento de los enemigos hacia abajo
    setPos(x(),y()+5);

    if(pos().y() + rect().height() > 600){
        juego->sangre->decrementa();
        scene()->removeItem(this);
        delete this;
        //qDebug()<<"bala fuera";
    }

}
