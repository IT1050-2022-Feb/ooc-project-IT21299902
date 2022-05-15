#include<cstring>
#include<iostream>
using namespace std;
#include"Feedback.h"
//implementing the feedback class

Feedback::Feedback() {
	strcpy(feedbackId, "0");
	strcpy(feedbackType, "");
	strcpy(feedbackDescription, "");
}

void Feedback::setDetails(char fid[], char fname[], char fdes[]) {
	strcpy(feedbackId, fid);
	strcpy(feedbackType, fname);
	strcpy(feedbackDescription, fdes);
}

void Feedback::displayDetails() {
	cout << "Feedback Id : " << feedbackId << endl;
	cout << "Feedback Type : " << feedbackType << endl;
	cout << "Feedback Description : " << feedbackDescription << endl;
}