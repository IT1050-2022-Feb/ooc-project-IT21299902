
class User //parent class
{
protected:

	char name[40];
	char Tp_No[15];
	char Email[30];
	char Address[80];
	char DOB[40];

public:
	User(); //default constructor
	void SetDetails1(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]); 
//display function
	void DisplayUserDetails();
};
