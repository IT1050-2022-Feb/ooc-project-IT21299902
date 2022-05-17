
#include "SystemAdmin.h" // connecting system admin header file
#include "Report.h" //connecting report header file
#include<cstring>
#include<iostream>



using namespace std;


Report::Report() {

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

  cout << "--------" << endl;
	cout << "\n Report ID   --> " << reportId << endl;
	cout << " Report Type --> " << ReportType << endl;
	cout << " sub total   --> " << sub_Total << endl << endl;
  cout << "--------" << endl;
  

}

void Report::addpayment(payment *pay){
    sub_Total=sub_Total+pay->getamount();
}

Report::~Report(){
  //Destructor
}







