#include "Puntaje.h"

#include <QFont>

Puntaje::Puntaje(QGraphicsItem * causa): QGraphicsTextItem(causa)
{
    //Se inicializa el puntaje en cero
    puntaje = 0;

    //Se crea el texto
    setPlainText(QString("Puntaje: " + QString::number(puntaje)));

    //pinto el texto
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Veces",16));

}

void Puntaje::incrementa()
{
    puntaje++;
    setPlainText(QString("Puntaje: ") + QString::number(puntaje));
}

int Puntaje::getPuntaje(){
    return puntaje;
}
