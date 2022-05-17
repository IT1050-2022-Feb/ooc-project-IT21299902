
#include<iostream>
#include<cstring>
#include"Vet.h" //linking vet header file
#define SIZE11 2
using namespace std ;

Vet::Vet() {

	strcpy(DocId,"0");
	strcpy(Position,"");
	strcpy(UserName,"");
	strcpy(Password , "");
}


//implimeting set details function

Vet::Vet(const char d_DocId[], const char d_Position[], const char d_UserNmae[], const char d_Password[]) {

	strcpy(DocId,d_DocId);
	strcpy(Position,d_Position);
	strcpy(UserName,d_UserNmae);
	strcpy(Password,d_Password);
    numberOFreservations=0;
}

void Vet::SetDetails(const char d_DocId[], const char d_Position[], const char d_UserNmae[], const char d_Password[]) {


  //implimenting the default constructor
  
	strcpy(DocId,d_DocId);
	strcpy(Position,d_Position);
	strcpy(UserName,d_UserNmae);
	strcpy(Password,d_Password);
}

void Vet::addreservation(reservation *r2){
    if(numberOFreservations<SIZE11){
        r1[numberOFreservations]=r2;
        numberOFreservations++;
    }
}
void Vet::setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]){
  strcpy(name, U_name);
	strcpy(Tp_No, u_Tp_NO);
	strcpy(Email, u_Email);
	strcpy(Address, u_Address);
	strcpy(DOB, u_DOB);
}

//implimenting display function
void Vet::DisplayDocDetails() {
	cout << "---------" << endl;
	cout << "Docotr ID -->" << DocId << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Password  -->" << Password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Positione -->" << Position << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl;
	cout << "---------" << endl;

}
void Vet::displayDetailsReservation(){
  cout << "--------" << endl;
    cout << "Docotr ID -->" << DocId << endl;
    cout << "Positione -->" << Position << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Password  -->" << Password << endl;

    for( int i = 0; i < numberOFreservations; i++)
        r1[i]->displayDetailsReservation();
    cout << "------------\n" ;
}

Vet::~Vet(){
    cout << "vet closed..." << endl ;
}

