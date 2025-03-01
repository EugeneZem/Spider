#ifndef SPIDERDB_H
#define SPIDERDB_H

#include<string>
#include <pqxx/pqxx>

class SpiderDB
{
    std::string host_       = "localhost",
                port_       = "5432",
                dbname_     = "Spider",
                user_       = "postgres",
                password_   = "392260";
public:
    SpiderDB();

    void SetWord(std::string newWord);
    int& GetWord(std::string newWord);

};

#endif // SPIDERDB_H
