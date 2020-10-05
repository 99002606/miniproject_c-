#ifndef SUPERMARKETDB_H_INCLUDED
#define SUPERMARKETDB_H_INCLUDED

#include "product.h"
#include<list>
#include<iterator>
class supermarketdb {

    std::list<product>items;
    public:
    void additems(std::string,std::string,double,int,std::string,double);
    product* finddataById(std::string);
    void removedata(std::string);
    int countAll();
    //int countTripsByOperator(std::string);
};
    //double computeMaxFare();
#endif // SUPERMARKETDB_H_INCLUDED
