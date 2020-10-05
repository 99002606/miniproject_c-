#include "supermarket.h"
#include<iostream>
using namespace std;

supermarket::supermarket():m_branch(""),m_city(""),m_rating(0) {};

supermarket::supermarket(std::string branch,std::string city,double rating):m_branch(branch),m_city(city),m_rating(rating){};

std::string supermarket::get_branch() {

    return m_branch;

}

std::string supermarket::get_city() {

    return m_city;
}

double supermarket::get_rating(){

        return m_rating;

}
