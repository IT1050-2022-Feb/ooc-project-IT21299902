#include"Complaint"
#include<iostream>
#include<cstring>
using namespace std;

Complaint::Complaint()
{
   // Default constructor
}
Complaint::Complaint(const char cid[], const char type[], const char description[], Registered_user* preg)
{
	strcpy_s(ComplaintID, cid);
	strcpy_s(Complaint_Type, type);
	strcpy_s(Complaint_Description, description);
	reg = preg;
	reg->copli(this);
}

void Complaint::Display_Details()
{

  // implement Display Complaint details
}

Complaint::~Complaint()
{
	//Destructor 
}
