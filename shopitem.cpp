#include "shopitem.h"
#include<cstring>
#include<iostream>
using namespace std;

shopitem::shopitem(){

}

shopitem::shopitem(const char newitemID[],const char newitem_Name[],const char newitem_Category[],float newitem_Price){
    strcpy(itemID,newitemID);
    strcpy(item_Name,newitem_Name);
    strcpy(item_Category,newitem_Category);
    item_Price=newitem_Price;
}

void shopitem::displayDetails(){
  cout << "--------" << endl;
    cout << "\nItem ID =" << itemID<< "\n" ;
    cout << "Item Name =" << item_Name<< "\n" ;
    cout << "Item Category =" << item_Category<< "\n" ;
    cout << "Item Price =" << item_Price<< "\n" ;
  cout << "--------" << endl;
}

shopitem::~shopitem(){
    cout<<"\n shop item closed...";
}
