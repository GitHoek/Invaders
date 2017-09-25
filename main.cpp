#include "mainwindow.h"
#include "gameobject.h"
#include <iostream>
#include "player.h"
#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    //Create player
    Player player(0,0,100,100,0,0);

/*    cout << player.GetPosition_X() << endl;
    cout << player.GetPosition_Y() << endl;
    cout << player.GetWidth() << endl;
    cout << player.GetHeight() << endl;
    cout << player.GetVelocity_X() << endl;
    cout << player.GetVelocity_Y() << endl;
*/
    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    MyRect * Gameplayer = new MyRect();
    Gameplayer->setRect(player.GetPosition_X(),player.GetPosition_Y(),player.GetHeight(),player.GetWidth());
    // add player to the scene
    scene->addItem(Gameplayer);

    // make rect focusable
    Gameplayer->setFlag(QGraphicsItem::ItemIsFocusable);
    Gameplayer->setFocus();

    // add a view
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    Gameplayer->setPos(view->width()/2,view->height()-player.GetHeight());
    cout<< view->width() <<endl;
    cout<< view->height() <<endl;
    cout << player.GetHeight() << endl;
    cout << Gameplayer << endl;
    return a.exec();

}
