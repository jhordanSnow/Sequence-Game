#include <QApplication>
#include "game.h"

game* sequence;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Todo el programa
    sequence = new game();
    sequence->show();

    return a.exec();
}
