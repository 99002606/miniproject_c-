#include "product.h"
//#include"supermarket.h"
#include<iostream>
#include<string>
using namespace std;

product::product():supermarket() {

        // m_Tax;
        m_quantity=0;
        m_invoiceId="";
        m_unitprice=0;

}

product::product(std::string branch,std::string city,double rating,int quantity,std::string Id, double unitprice):supermarket(branch,city,rating) {

    m_quantity=quantity;
    m_invoiceId=Id;
    m_unitprice=unitprice;
}

double product::ComputeTax(){

    double tax=m_quantity*m_unitprice*m_tax;
    return tax;
}

int product::get_quantity() {

    return m_quantity;

}

std::string product::get_invoiceId(){

        return m_invoiceId;

}

double product::get_unitprice() {

    return  m_unitprice;

}
/*int main(){
    return 0;
}
*/
