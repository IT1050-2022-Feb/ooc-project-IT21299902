//connecting header files

#include <iostream>
#include "Reservation.h"
#include "Vet.h"
#include "Shop_Item.h"
#include "Order.h"
#include "Registered_User.h"
using namespace std;

int main(){
                    
    Vet *v01=new Vet();  //parameterized constructor
    Vet *v02=new Vet();  //parameterized constructor

    reservation *reservation1=new reservation();  //Parameterized constructor with port objects
    reservation *reservation2=new reservation();  //Parameterized constructor with port objects
    reservation *reservation3=new reservation();  //Parameterized constructor with port objects
    reservation *reservation4=new reservation();  //Parameterized constructor with port objects

    v01->displayDetails();
    v02->displayDetails();
    
   // ------------- Shop Item vs Order ---------------------------------
   order *order1=new order(); //Parameterized constructor with port objects
    order *order2=new order(); //Parameterized constructor with port objects

    shopitem *Item1= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item2= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item3= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item4= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item5= new shopitem(); //Parameterized constructor with port objects

    order1->addshopitem(Item1,Item2,Item3,Item4); 
    order2->addshopitem(Item5,Item4,Item3,Item1);

    order1->displayDetails(); //displaying order details
    order2->displayDetails(); //displaying order details

 // ----------- Shop Item vs Regsitered_User
    
     registered_user *r01=new registered_user();
    registered_user *r02=new registered_user();

    shopitem *Item1= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item2= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item3= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item4= new shopitem(); //Parameterized constructor with port objects
    shopitem *Item5= new shopitem(); //Parameterized constructor with port objects

    r01->additems(Item1,Item2,Item3,Item4);
    r02->additems(Item5,Item3,Item4,Item2);

    r01->displayDetails();
    r02->displayDetails();

        //deleting dynamic objects
      delete v01;
      delete v02;
      delete reservation1;delete reservation2;delete reservation3;delete reservation4;
      delete order1;
      delete order2;
      delete r01;
      delete r02;

}
}  
     

  
}