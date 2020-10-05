#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include "supermarket.h"

#include<iostream>
using namespace std;

class product:public supermarket {
   //protected:
        int m_quantity;
        std::string m_invoiceId;
       // double m_Tax;
        double m_unitprice;
        double m_tax=0.05;
    public:
        product();
        product(std::string,std::string,double,int,string,double);
        double ComputeTax() override;
        int get_quantity();
        //double get_tax();
        std::string get_invoiceId();
  	//void display();
        double get_unitprice();
};

#endif // PRODUCT_H_INCLUDED
