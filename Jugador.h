#ifndef JUGADOR_H
#define JUGADOR_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>

class Jugador: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Jugador(QGraphicsItem * causa=0);
    void keyPressEvent(QKeyEvent * event);

public slots:
    void creo_Enenemigo();

};

#endif // JUGADOR_H
