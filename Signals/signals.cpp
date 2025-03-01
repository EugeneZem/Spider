#include "signals.h"

Signals::Signals(QObject *parent) : QObject{parent}
{

}

Signals::~Signals()
{
    qDebug() << "Destroy sygnal";
}

void Signals::SendSignal()
{
    emit sig_Signal();
    qDebug() << "Signal Emitted";
}
