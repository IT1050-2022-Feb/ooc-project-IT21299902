#ifndef feedback
#define feedback
#include "registered_user.h"
// feedback class
class registered_user;
class Feedback {
private:
	char feedbackId[10];
	char feedbackType[50];
	char feedbackDescription[100];
	registered_user* reguser1;

public:
	Feedback();
  Feedback(const char fid[],const char fname[],const char fdes[]);
    void addRegUser(registered_user* reg1);
	void displayDetails();
};
#endif