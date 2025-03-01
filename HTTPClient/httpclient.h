#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

//#include <boost/beast/core.hpp>
//#include <boost/beast/http.hpp>
//#include <boost/beast/version.hpp>
//#include <boost/asio/connect.hpp>
//#include <boost/asio/ip/tcp.hpp>
//#include <cstdlib>
#include <QObject>
#include <QDebug>

//namespace beast = boost::beast;
//namespace http = beast::http;
//namespace net = boost::asio;
//using tcp = net::ip::tcp;

class HTTPClient : public QObject
{
    Q_OBJECT

    char* host_;
    int const port_;
    char* target_;

public:
    explicit HTTPClient(QObject *parent = nullptr);

    ~HTTPClient();

public slots:
    void Conect();

};

#endif // HTTPCLIENT_H
