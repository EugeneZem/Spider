#ifndef SIGNALS_H
#define SIGNALS_H

#include <QObject>
#include <QDebug>

class Signals : public QObject
{
    Q_OBJECT

public:
    explicit Signals(QObject *parent = nullptr);

    ~Signals();

public slots:

signals:

    void sig_Signal(QString rcv);


};

#endif // SIGNALS_H
