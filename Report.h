#ifndef  REP
#define REP
#include "payment.h"

class Report  //implimenting report class
{
private:
	char reportId[20];
	char ReportType[30];
	float sub_Total;

public:
	Report(); //default constructore
	Report(const char ID[], const char type[], float total); //parameterized constructor
	void DisplayDetails();
	void addpayment(payment *pay);
    ~Report();

};
#endif