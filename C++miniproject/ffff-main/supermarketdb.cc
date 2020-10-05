#include "supermarketdb.h"
#include<iterator>
#include<list>

void supermarketdb:: additems(std::string branch,std::string city,double rating,int quantity,std::string Id,double unitprice) {

    items.push_back(product(branch,city,rating,quantity,Id,unitprice));

}

product* supermarketdb::finddataById(std::string Id) {

    std::list<product>::iterator iter;
    for(iter=items.begin(); iter!=items.end(); ++iter)
        if(iter->get_invoiceId()==Id)
            return &(*iter);
    return NULL;

}

void supermarketdb::removedata(std::string Id) {

    std::list<product>::iterator iter;
    for(iter=items.begin(); iter!=items.end(); ++iter)
        if(iter->get_invoiceId()==Id)
            break;
    if(iter!=items.end())
        items.erase(iter);

}
int supermarketdb::countAll(){

	int count1=0;
	std::list<product>::iterator iter;
	for(iter=items.begin();iter!=items.end();++iter)
		count1++;
	return count1;
}
