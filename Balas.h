#ifndef BALAS_H
#define BALAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsRectItem>

class Balas: public QObject,public QGraphicsRectItem  {
    Q_OBJECT
public:
    Balas();
public slots:
    void movBala();
};

#endif // BALAS_H
