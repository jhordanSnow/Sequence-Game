#ifndef CARTATABLERO_H
#define CARTATABLERO_H

#include <QBrush>
#include <QGraphicsPixmapItem>

#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneHoverEvent>

class cartatablero: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    cartatablero();
    cartatablero(int valor, QString tipo, int posX, int posY, QString urlImage);
    /*
    ** Método para ajustar el tamaño de la carta con respecto al largo
    */
    void setSize(float largo);
    /*
    ** Método cuando se pasa el mouse por encima de la carta
    */
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    /*
    ** Método cuando sale el mouse de la carta
    */
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    //void mousePressEvent(QGraphicsSceneMouseEvent *event);

    virtual ~cartatablero();
private:
    /*
    ** Valor de la carta
    */
    int valor;
    /*
    ** Tipo de la carta (Corazones, Pica, Trebol, Diamante)
    */
    QString tipo;
    /*
    ** Variables para saber la posición de la carta dentro de la pantalla
    */
    int posX;
    int posY;
    /*
    ** Variable para identificar el estado de la carta
    ** 1 cuando está tomada por algun jugador
    ** 0 cuando está sin tomar
    */
    int estado;
    /*
    ** Variable para saber quien tiene la carta
    */
    //jugador* dueno;
};

#endif // CARTATABLERO_H
