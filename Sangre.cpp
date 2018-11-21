#include "Sangre.h"
#include <QFont>
#include <QGraphicsView>

Sangre::Sangre(QGraphicsItem *parent): QGraphicsTextItem(parent){

    sangre = 3;

    // dibuja el texto
    setPlainText(QString("Sangre: ") + QString::number(sangre)); // Health: 3
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}


void Sangre::decrementa(){
    sangre--;
    setPlainText(QString("Sangre: ") + QString::number(sangre));
    return;
}

int Sangre::getSangre(){
    return sangre;
}
