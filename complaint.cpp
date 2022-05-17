

#include <iostream>
#include <cstring>
#include"registered_user.h"
#include "complaint.h"
using namespace std;


Complaint::Complaint()
{

}
Complaint::Complaint(const char cid[], const char type[], const char description[])
{
	strcpy(ComplaintID, cid);
	strcpy(Complaint_Type, type);
	strcpy(Complaint_Description, description);
}

void Complaint::addRegUser(registered_user* preg){
	reg = preg;
	reg->copli(this);
}

void Complaint::Display_Details()
{
	cout << "--------" << endl;
	cout <<  "Complaint ID : " << ComplaintID << endl;
	cout << "Complaint Type : " << Complaint_Type <<endl;
	cout << "Complaint Description : " << Complaint_Description << endl;
	cout << "--------" << endl;
}

Complaint::~Complaint()
{
	//Destructor 
}
