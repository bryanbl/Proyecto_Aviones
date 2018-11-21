#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <QGraphicsTextItem>

class Puntaje: public QGraphicsTextItem{
public:
    Puntaje(QGraphicsItem * causa = 0);
    void incrementa();
    int getPuntaje();

private:
    int puntaje;

};

#endif // PUNTAJE_H
