#include "Pet.h"
#include<iostream>
#include<cstring>

using namespace std;


Pet::Pet() {

	strcpy_s(petID, "0");
	strcpy_s(petName, "");
	strcpy_s(petBreed, "");
	strcpy_s(petCategoy, "");
	strcpy_s(petColor, "");
	strcpy_s(height, "0.0 inch");
	strcpy_s(weight, " 0.0 KG");
}

 Pet::Pet(const char id[], const char name[], const char breed[], const char category[], const char color[], const char p_height[], const char p_weight[]) {

	strcpy_s(petID, id);
	strcpy_s(petName, name);
	strcpy_s(petBreed, breed);
	strcpy_s(petCategoy, category);
	strcpy_s(petColor, color);
	strcpy_s(height, p_height);
	strcpy_s(weight, p_weight);
}

void Pet::DisplayDetails() {

	cout << "----------------------------------------" << endl;
	cout << "Pet ID         --> " << petID << endl;
	cout << "pet name       --> " << petName << endl;
	cout << "pet breed      --> " << petBreed  << endl;
	cout << "Pet category   --> " << petCategoy << endl;
	cout << "Pet color      --> " << petColor << endl;
	cout << "Pet height     --> " << height << endl;
	cout << "Pet weight     --> " << weight <<endl<< endl;
	cout << "----------------------------------------" << endl;

}

 Registerd_User::Registerd_User() {

	strcpy_s(userId, "0");
	strcpy_s(userName, "");

}

 void Registerd_User::SetDetails(const char name[], const char id[]) {

	 strcpy_s(userName, name);
	 strcpy_s(userId, id);
 }

 void Registerd_User::addPet(Pet* p1, Pet* p2, Pet* p3) {
	 Pet1[0] = p1;
	 Pet1[1] = p2;
	 Pet1[2] = p3;
 }

 void Registerd_User::DisplayDetails() {

	 cout << "------------------------------------------" << endl;
	 cout << "User ID   --> " << userId << endl;
	 cout << "User Name --> " << userName << endl << endl;

	 for (int i = 0; i < SIZE; i++) {
		 Pet1[i]->DisplayDetails();
	 }
	 cout << "------------------------------------------" << endl;
 }
