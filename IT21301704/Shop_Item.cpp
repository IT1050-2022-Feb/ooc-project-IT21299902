
#include <iostream>
#include <cstring>
#include "Shop_Item.h"
using namespace std ;

shopitem::shopitem(){
      // Default Contructor
}

  // Implementing set details fucntion
shopitem::shopitem(const char newitemID[],const char newitem_Name[],const char newitem_Category[],float newitem_Price){
    strcpy(itemID,newitemID);
    strcpy(item_Name,newitem_Name);
    strcpy(item_Category,newitem_Category);
    item_Price=newitem_Price;
}

// Implementing Shop Item Details function
void shopitem::displayDetails() 
{
    cout << "\nItem ID =" << itemID<< "\n" ;
    cout << "Item Name =" << item_Name<< "\n" ;
    cout << "Item Category =" << item_Category<< "\n" ;
    cout << "Item Price =" << item_Price<< "\n" ;
}
// Destructor
shopitem::~shopitem() 
{
    cout<<"\n shop item closed...";
}
