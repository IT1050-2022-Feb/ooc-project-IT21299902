#include "payment.h"
class Report
{
private:
	char reportId[20];
	char ReportType[30];
	float sub_Total;

public:
	Report();
	Report(const char ID[], const char type[], float total);
//Parameterized constructor
	void DisplayDetails();
    void addpayment(payment *pay);
//dependacy connection with report and payment
    ~Report();

};