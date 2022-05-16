#include <iostream>
#include <cstring>
#include "Registered_User.h"
using namespace std ;y

  // Default Contructor
registered_user::registered_user(){
  
}
  // Implementing set details function
registered_user::registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]){
    strcpy(userID,newuser_ID);
    strcpy(user_Name,newuser_Name);
    strcpy(password,newpassword);
}

 // Assinging Resgisters_Users
void registered_user::additems(shopitem *I1,shopitem *I2,shopitem *I3,shopitem *I4){
    item[0]=I1;
    item[1]=I2;
    item[2]=I3;
    item[3]=I4;
}

 // Implementing Registered_User Details function
void registered_user::displayDetails() 
{

    cout << "User ID =" << userID << "\n";
    cout << "User Name =" << user_Name<< "\n";
    cout << "Password =" << password << "\n";
    for( int i = 0; i < SIZE; i++)
        item[i]->displayDetails();
    cout << "---------------------\n" ;
}

 // Destructor
registered_user::~registered_user() 
{
    cout<< "\nuser closed";
}
