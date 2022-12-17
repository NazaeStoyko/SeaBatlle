#include "Images.h"

Images pictures = Images();

Images::Images():
    isLoaded_( false )
{
}

void Images::load()
{
    if( isLoaded_ )
        return;

    images.insert( "field", QImage("qrc:/img/img/bagraund.png") );
    images.insert( "dot", QImage("qrc:/img/img/shot.png") );
    images.insert( "full", QImage("qrc:/img/img/beaten.png") );
    images.insert( "half", QImage("qrc:/img/img/ship.png") );
//    images.insert( "redhalf", QImage(":/redhalf.png") );
//    images.insert( "redfull", QImage(":/redfull.png") );
//    images.insert( "about", QImage(":/about.png") );
    isLoaded_ = true;
}

QImage& Images::get( const QString& imgName )
{
    QMap<QString, QImage>::iterator i = images.find( imgName );

    if( i == images.end() )
        throw 1;

    return i.value();
}

bool Images::isLoaded()
{
    return isLoaded_;
}
