#ifndef GAME_H
#define GAME_H

#include "cartatablero.h"

#include <QGraphicsView>
#include <QGraphicsScene>

class game: public QGraphicsView
{
public:
    game();
private:
    QGraphicsScene *scene;
};

#endif // GAME_H
