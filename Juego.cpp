#include "Juego.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "Enemigo.h"


Juego::Juego(QWidget *causa)
{
    // Se se Crea Una escena
    scene = new QGraphicsScene();
    scene-> setSceneRect(0,0,800,600);

    //Se limita el recuadro de la scena y se desabilitan los scrollbar
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    //Se crea el jugador
    jugador = new Jugador();
    jugador->setRect(0,0,100,100);
    jugador->setPos(400,500);

    //Selecciono el gugador constantemente
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();

    //Agrego el jugador a la scena
    scene->addItem(jugador);

    //Creo el puntaje
    puntaje = new Puntaje();
    scene->addItem(puntaje);

    //Creo la sangre
    sangre = new Sangre();
    sangre->setPos(sangre->x(),sangre->y()+25);
    scene->addItem(sangre);


    //Creo los enemigos
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),jugador,SLOT(creo_Enenemigo()));
    timer ->start(2000);

    show();


}
