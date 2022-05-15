#ifndef feedback
#define feedback
#include "Registered_User.h"
// feedback class
class Feedback {
private:
	char feedbackId[10];
	char feedbackType[50];
	char feedbackDescription[100];
	Registered_User* reguser;

public:
	Feedback();
	void setDetails(char fid[], char fname[], char fdes[]);
	void displayDetails();
};
#endif