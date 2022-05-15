#include "Complaint"
#include "Service"

#define SIZE 2
class Registered_user
{
private:

	char User_ID[20];
	char User_name[30];
	char Password[20];
  char Name[30];
  char Phone_Number[10];
  char Email_Address[50];
  char Address[50];
  char DOB[15];
	Complaint* com[SIZE];
  Service* s1;
	int noOfComplaints;

public:
	Registered_user();
	Registered_user(const char id[], const char name[], const char pw[], const char nname[], const char pno[], const char mailAdd[], const char add[], const char dob[]);
	void copli(Complaint* c);
	void DisplayDetails();
	~Registered_user();


};