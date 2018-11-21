#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Jugador.h"
#include "Puntaje.h"
#include "Sangre.h"

class Juego: public QGraphicsView
{
public:
    Juego(QWidget * causa=0);

    QGraphicsScene * scene;
    Jugador * jugador;
    Puntaje *puntaje;
    Sangre *sangre;
};

#endif // JUEGO_H
