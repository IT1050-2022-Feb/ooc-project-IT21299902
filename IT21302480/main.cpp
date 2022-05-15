#include <iostream>

#include "Registed_User.h"//connecting header files
#include "Service.h"
#include"Complaint"
#include "Unregister_User.h"
#include "Donation.h"

#include<cstring>
using namespace std;

#define SIZE 2

int main()

{

    Registed_User* reg[SIZE]; 
    Complaint* com[SIZE]; 
    Service* s[SIZE];
    Unregister_User* ur[SIZE];
    Donation* d[SIZE];

    reg[0]  = new Registed_User(); // Object - Registed_User class
    reg[1] = new Registed_User();

    com[0]  = new Complaint(); // Object - Complaint class
    com[1] = new Complaint();

    s[0] = new Service();// Object - Service class
	  s[1] = new Service();

    ur[0] = new Unregister_User();// Object - Unregister_User class
    ur[1] = new Unregister_User();

    d[0] = new Donation();// Object - Donation class
    d[1] = new Donation();
  
    reg[0]->DisplayDetails();// Object - Registed_User class
    reg[1]->DisplayDetails();

  cout << endl;

    s[0]->DisplayDetails();
	  reg[0]->Display_Details();

  cout << endl;
  
	  s[1]->DisplayDetails();
	  reg[1]->Display_Details();

  cout << endl;

     ur[0]->DisplayDetails();// Object - Unregister_User class
     ur[1]->DisplayDetails();

     cout << endl;
     cout << endl;

     //Registered user and Donation has a Biderectional Association
     //Registered user and Service has a Uniderectional Association
     //Registered user and Complaint has a Biderectional Association

    for (int i = 0; i < SIZE; i++)
    {
        cout << "..DELETED successfully.." << endl; //delete dynamic objects
        delete reg[i];
    }
    
    cout << endl;
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "..DELETED successfully.." << endl; //delete dynamic objects
        delete com[i];
    }

    cout << endl;
    cout << endl;
  
    for (int i = 0; i < SIZE; i++)
    {
        cout << "..DELETED successfully.." << endl; //delete dynamic objects
        delete s[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "..DELETED successfully.." << endl; //delete dynamic objects
        delete ur[i];
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "..DELETED successfully.." << endl; //delete dynamic objects
        delete d[i];
    }
}
