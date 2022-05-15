#include "System_Admin.h"
#include<cstring>
#include<iostream>
#define SIZE 2

using namespace std;


Report::Report() {

	strcpy_s(reportId, "0");
	strcpy_s(ReportType, "");
	sub_Total = 0.0;
}

Report::Report(const char ID[], const char type[], float total) {

	strcpy_s(reportId, ID);
	strcpy_s(ReportType, type);
	sub_Total = total;
}

void Report::DisplayDetails() {

	cout << "----------------------------------------" << endl;
	cout << "Report ID   --> " << reportId << endl;
	cout << "Report Type --> " << ReportType << endl;
	cout << "sub total   --> " << sub_Total << endl << endl;
	cout << "----------------------------------------" << endl;

}

System_Admin::System_Admin() {

	strcpy_s(adminId, "0");
	strcpy_s(adminName, "");
}



void System_Admin::SetDetails(const char a_Id[], const char admin_Name[]) {

	strcpy_s(adminId, a_Id);
	strcpy_s(adminName, admin_Name);


}

void System_Admin::addReport(Report* r1, Report* r2) {
	rep[0] = r1;
	rep[1] = r2;
}

void System_Admin::DisplayDetails() {

	cout << "------------------------------------------" << endl;
	cout << "Admin ID   --> " << adminId << endl;
	cout << "Admin Name --> " << adminName<<endl << endl;
	
	for (int i = 0; i < SIZE; i++) {
		rep[i]->DisplayDetails();
	}
	cout << "------------------------------------------" << endl;
}



