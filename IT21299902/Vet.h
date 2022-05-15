
#include"User.h"


class Vet :public User {  //inheritance with user class

private:
	char DocId[20];
	char Position[50];
	char UserName[50];
	char Password[20];

public:
	Vet();
	void SetDetails(const char d_DocId[], const char d_Position[] , const char d_UserNmae[] ,const char d_Password[]);
	void DisplayDocDetails();
};