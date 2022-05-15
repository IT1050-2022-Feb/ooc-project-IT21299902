
#include "System_Admin.h" // connecting system admin header file
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

}

Report::~Report(){
  //Destructor
}







