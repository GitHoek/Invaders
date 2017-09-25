#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        while(pos().x() >= 0){
            setPos(x()-1,y());
            // timer verwerken om beweging te vertragen
            if (event->key() != Qt::Key_Left){
                break;
            }
        }
    }
    else if (event->key() == Qt::Key_Right){
        if(pos().x() + rect().width() <= 800)
        setPos(x()+10,y());
    }

    else if (event->key() == Qt::Key_Space){
        //Create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}
