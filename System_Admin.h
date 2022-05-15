#pragma once

#include<iostream>
#include<cstring>
#define SIZE 2 


class Report
{
private:
	char reportId[20];
	char ReportType[30];
	float sub_Total;

public:
	Report();
	Report(const char ID[], const char type[], float total);
	void DisplayDetails();

};


class System_Admin {

private:
	char adminId[20];
	char adminName[30];
	Report *rep[SIZE];

public:
	System_Admin();
	void SetDetails(const char adminId[], const char admin_Name[]);
	void addReport(Report* r1, Report* r2);
	void DisplayDetails();

};

