#ifndef SUPERMARKET_H_INCLUDED
#define SUPERMARKET_H_INCLUDED

#include<iostream>

using namespace std;

class supermarket {
  //protected:
    std::string m_branch;
    std::string m_city;
    double m_rating;
  public:
    supermarket();
    supermarket(std::string,std::string,double);
    virtual double ComputeTax()=0;
    std::string get_branch();
    std::string get_city();
    double get_rating();

};

#endif // SUPERMARKET_H_INCLUDED
