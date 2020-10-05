#include "supermarket.h"
#include "product.h"
#include "supermarketdb.h"
#include<fstream>
#include<sstream>
#include<iostream>
#include <gtest/gtest.h>
using namespace std;

//#include<bits/stdc++.h>
namespace {

class supermarketdbtest : public ::testing::Test {

  protected:
    void SetUp() {
        //items.additems("A", "Yangon",7,9, "750-67-8428",74.69);
        std::list<string> res;
	std::list<string> ::iterator iter;
	std::string m_branch,m_city;
       double m_rating;
       int m_quantity;
       std::string m_invoiceId;
       // double m_Tax;
       double m_unitprice;
std::string S, T;
		    		fstream fin;
		    		int count=1;
		    		fin.open("affu.csv", ios::in);
		    		while(getline(fin, S))
		    		{
		    			stringstream X(S);
		    			while (getline(X, T,'\n'))
		   			 {
		   	 			res.push_back(T);
		    			 }
		   	        }
		    		iter=res.begin();
		   		 ++iter;
		    		for(;iter!=res.end();++iter)
		    		{
		    			stringstream ss(*iter); 
		    			while (ss.good()) 
		    			{ 
						string substr; 
						getline(ss, substr, ','); 
						//cout<<substr<<"  "<<endl;
					switch(count)
						{
							case 1:
								m_branch=substr;
								break;
							
							case 2:
								m_city=substr;
								break;
							case 3:
								m_rating=std::stod(substr);
								break;
							case 4:
								m_quantity=std::stoi(substr);
								break;
						        case 5:
								m_invoiceId=substr;
								break;
								
							case 6:
								m_unitprice=stod(substr);
								
     
    
    
    								items.additems(m_branch,m_city,m_rating,m_quantity,m_invoiceId,m_unitprice);
    								count =0;
								
								std::string m_branch="";std::string m_city="";double m_rating=0;int m_quantity=0;
								std::string m_invoiceId="";double m_unitprice=0;
								break;
								
						}
						++count;
						
				  	} 
		  		}
    
 
 			} 
						
    
    
    void TearDown() {}
    supermarketdb items;

};


TEST_F(supermarketdbtest, CountTest) {
    //items.additems("A", "Yangon",7,9.1, "750-67-8458",74.69);
   
   EXPECT_EQ(6, items.countAll());

}
}

