#pragma once

#include<iostream>

using namespace std;


//creating User ancestore/parent class
class User
{
protected:

	char name[40];
	char Tp_No[15];
	char Email[30];
	char Address[80];
	char DOB[40];

public:

	User();
	void SetDetails1(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]);
	void DisplayDetails();
};




//inheriting Registered user cvlass with User class
class Registered_User : public User{


protected:
	char userId[20];
	char userName[30];
	char password[20];

public:
	Registered_User();
	void SetDetails( const char u_UserId[], const char u_UserName[] , const char u_Password[]);
	void DisplayDetails();

};



//inheriting the Unregistered user class with User class
class Unregistered_User : public User{

public:
	Unregistered_User();
	void DisplayDetails();
};



//inheriting  vet with user class

class Vet :public User {

private:
	char DocId[20];
	char Position[50];
	char UserName[50];
	char Password[20];

public:
	Vet();
	void SetDetails(const char d_DocId[], const char d_Position[] , const char d_UserNmae[] ,const char d_Password[]);
	void DisplayDetails();
};


//inheriting class System Admiin with User class

class SystemAdmin : public User {

protected:
	char StafId[20];
	char UserName[20];
	char password[20];

public:
	SystemAdmin();
	void SetDetails(const char u_StaffId[] , const char u_UserNmae[] ,const char u_Password[]);
	void DisplayDetails();

};






