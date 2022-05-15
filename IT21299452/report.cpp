#include "report.h"
#include <iostream>
#include <cstring>
using namespace std;
Report::Report() {
//default constructor
	strcpy(reportId, "0");
	strcpy(ReportType, "");
	sub_Total = 0.0;
}

Report::Report(const char ID[], const char type[], float total) {

	strcpy(reportId, ID);
	strcpy(ReportType, type);
	sub_Total = total;
}

void Report::DisplayDetails() {

	cout << "\n Report ID   --> " << reportId << endl;
	cout << " Report Type --> " << ReportType << endl;
	cout << " sub total   --> " << sub_Total << endl << endl;

}

void Report::addpayment(payment *pay){
    sub_Total=sub_Total+pay->getamount();
  //dependacy connection with report and payment
    //adding payments one by one to get total amount 
}
Report::~Report(){
  cout<<"report closed..."
}