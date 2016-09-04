#include "cartatablero.h"
#define DEFAULT_SIZE 50
#define DEFAULT_ZOOM 90

cartatablero::cartatablero(){}

cartatablero::cartatablero(int valor, QString tipo, int posX, int posY, QString urlImage){
    setPixmap(urlImage);
    this->valor = valor;
    this->tipo = tipo;
    this->posX = posX;
    this->posY = posY;

    setPos(posX, posY);
    setAcceptHoverEvents(true);
    setFlag(QGraphicsItem::ItemIsFocusable);

    setSize(DEFAULT_SIZE);
}

void cartatablero::setSize(float largo)
{
    setPixmap(this->pixmap().scaledToHeight(largo));
}

void cartatablero::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    setSize(DEFAULT_ZOOM);
}


void cartatablero::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    setSize(DEFAULT_SIZE);
}

cartatablero::~cartatablero(){

}
