
#include<iostream>
#include<cstring>
#include"Vet.h" //linking vet header file

using namespace std ;

Vet::Vet() {

	strcpy(DocId,"0");
	strcpy(Position,"");
	strcpy(UserName,"");
	strcpy(Password , "");
}


//implimeting set details function


void Vet::SetDetails(const char d_DocId[], const char d_Position[], const char d_UserNmae[], const char d_Password[]) {


  //implimenting the default constructor
  
	strcpy(DocId,d_DocId);
	strcpy(Position,d_Position);
	strcpy(UserName,d_UserNmae);
	strcpy(Password,d_Password);
}


//implimenting display function

void Vet::DisplayDocDetails() {


	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Docotr ID -->" << DocId << endl;
	cout << "User name -->" << UserName << endl;
	cout << "Password  -->" << Password << endl;
	cout << "Name      -->" << name << endl;
	cout << "Positione -->" << Position << endl;
	cout << "Tp No     -->" << Tp_No << endl;
	cout << "Email     -->" << Email << endl;
	cout << "Address   -->" << Address << endl;
	cout << "BOD       -->" << DOB << endl;
	cout << "---------------------------------------------------------------------------------" << endl;


}

