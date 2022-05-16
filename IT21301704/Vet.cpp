
#include <iostream>
#include <cstring>
#include "Vet.h"
using namespace std ;

 // Defualt Consrtunctors
Vet::Vet()
{
  
}

// Implementing set details function 
Vet::Vet(const char d_DocId[], const char d_Position[], const char d_UserNmae[], const char d_Password[])
{

	strcpy(DocId,d_DocId);
	strcpy(Position,d_Position);
	strcpy(UserName,d_UserNmae);
	strcpy(Password,d_Password);
    numberOFreservations=0;
}

void Vet::addreservation(reservation *r2)
{
    if(numberOFreservations<SIZE){
        r1[numberOFreservations]=r2;
        numberOFreservations++;
    }
}
  //Implementing display Vet details functions
void Vet::displayDetails()
{
    cout << "Docotr ID -->" << DocId << endl;
    cout << "Positione -->" << Position << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Password  -->" << Password << endl;

    for( int i = 0; i < numberOFreservations; i++)
        r1[i]->displayDetails();
    cout << "---------------------\n" ;
}
  // Destructor
Vet::~Vet() 
{
    cout << "vet closed..." << endl ;
}