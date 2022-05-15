
#include"User.h"  //connecting user for inheritence
#include "Pet.h"  //pet header file
#define SIZE 3

class Registered_User : public User{ //connecting inheritence


protected:
	char userId[20];
	char userName[30];
	char password[20];
  Pet *Pet1[SIZE]; //uni directional associaltion (Registered user -> Pet)

public:
	Registered_User(); //default constructor
	void SetDetails( const char u_UserId[], const  char u_UserName[] , const char u_Password[]);
  void addPet(Pet* p1, Pet* p2, Pet* p3); //adding pet details to the Registered user (uni directional association)
  void DisplayDetails();
  void DisplayPDetails();


};