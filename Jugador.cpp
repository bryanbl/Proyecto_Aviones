#include "Jugador.h"
#include <QKeyEvent>
#include "Balas.h"
#include "Enemigo.h"
#include <QGraphicsScene>

Jugador::Jugador(QGraphicsItem *causa): QGraphicsRectItem(causa){

}

//Configuracion del movimiento
void Jugador::keyPressEvent(QKeyEvent *event)
{
    //cada vez que presiono una tecla el programa lo reconoce
    //qDebug() << "MiRecta conoce la tecla presionada";

    //Mueve a la izquierda con el boton de la flecha a la izquierda
    if(event->key()==Qt::Key_Left){
        if(pos().x()>0)
            setPos(x()-10,y());
    }
    //Mueve a la derecha con el boton de la flecha a la derecha
    else if(event->key()==Qt::Key_Right){
        if(pos().x()<800-rect().width())
            setPos(x()+10,y());
    }
    /*else if(event->key()==Qt::Key_Up){
        setPos(x(),y()-10);
    }
    else if(event->key()==Qt::Key_Down){
        setPos(x(),y()+10);
    }*/
    else if(event->key() == Qt::Key_Space){
        //Aqui estan las balas
        Balas * balas = new Balas();
        balas->setPos(x(),y());
        //qDebug() << "Bala creada";
        scene() -> addItem(balas);
    }
}

void Jugador::creo_Enenemigo(){
    //Creo mi enemigo
    Enemigo *enemigo = new Enemigo();
    scene() ->addItem(enemigo);
    return;
}
