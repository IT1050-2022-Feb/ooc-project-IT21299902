#include "Registered_user"
class Complaint
{
private:
	char ComplaintID[20];
	char Complaint_Type[30];
	char Complaint_Description[200];
	Registered_user* reg;
public:
	Complaint();
	Complaint(const char cid[], const char type[],const char description[], Registered_user* preg);
	void Display_Details();
	~Complaint();
};