#include "game.h"

game::game()
{
    this->scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1200,600);
    scene->setBackgroundBrush(Qt::blue);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    setFixedSize(1200, 600);
    setScene(this->scene);

    cartatablero* carta1 = new cartatablero(1, "pica", 50, 50, ":/Cartas/cartas/1_pica.png");
    scene->addItem(carta1);

    cartatablero* carta2 = new cartatablero(2, "pica", 100, 50, ":/Cartas/cartas/2_pica.png");
    scene->addItem(carta2);

    cartatablero* carta3 = new cartatablero(3, "pica", 150, 50, ":/Cartas/cartas/3_pica.png");
    scene->addItem(carta3);

    cartatablero* carta4 = new cartatablero(4, "pica", 200, 50, ":/Cartas/cartas/4_pica.png");
    scene->addItem(carta4);

    this->show();
}

