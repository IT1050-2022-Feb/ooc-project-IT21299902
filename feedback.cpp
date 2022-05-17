#include<cstring>
#include<iostream>
using namespace std;
#include"feedback.h"
//implementing the feedback class

Feedback::Feedback() {
	strcpy(feedbackId, "0");
	strcpy(feedbackType, "");
	strcpy(feedbackDescription, "");
}

Feedback::Feedback(const char fid[],const char fname[],const char fdes[]) {
	strcpy(feedbackId, fid);
	strcpy(feedbackType, fname);
	strcpy(feedbackDescription, fdes);
}
void Feedback::addRegUser(registered_user* reg1){
    reguser1 = reg1;
    reguser1->addFeedback(this);
}
void Feedback::displayDetails() {
    cout << "---------"<< endl;
	cout << "Feedback Id : " << feedbackId << endl;
	cout << "Feedback Type : " << feedbackType << endl;
	cout << "Feedback Description : " << feedbackDescription << endl;
    cout << "---------"<< endl;
}
