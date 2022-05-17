#ifndef COM
#define COM
#include "registered_user.h"

class registered_user;
class Complaint;

class Complaint
{
private:
	char ComplaintID[20];
	char Complaint_Type[30];
	char Complaint_Description[200];
    registered_user* reg;
public:
	Complaint();
	Complaint(const char cid[], const char type[],const char description[]);
	void addRegUser(registered_user* preg);
	void Display_Details();
	~Complaint();
};
#endif
