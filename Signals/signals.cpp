#include "signals.h"

Signals::Signals(QObject *parent) : QObject{parent}
{

}

Signals::~Signals()
{
    qDebug() << "Destroy sygnal";
}
