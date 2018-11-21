#ifndef SANGRE_H
#define SANGRE_H

#include <QGraphicsTextItem>

class Sangre: public QGraphicsTextItem{
public:
    Sangre(QGraphicsItem * parent=0);
    void decrementa();
    int getSangre();
private:
    int sangre;
};

#endif // SANGRE_H
