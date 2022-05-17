#include<iostream>
#include "Pet.h"  //connecting pet header file
#include<cstring>
using namespace std ;


//default constructore
Pet::Pet() {

	strcpy(petID, "0");
	strcpy(petName, "");
	strcpy(petBreed, "");
	strcpy(petCategoy, "");
	strcpy(petColor, "");
	strcpy(height, "0.0 inch");
	strcpy(weight, " 0.0 KG");
}


//parameterized constructor
 Pet::Pet(const char id[], const char name[], const char breed[], const char category[], const char color[], const char p_height[], const char p_weight[]) {

	strcpy(petID, id);
	strcpy(petName, name);
	strcpy(petBreed, breed);
	strcpy(petCategoy, category);
	strcpy(petColor, color);
	strcpy(height, p_height);
	strcpy(weight, p_weight);
}

void Pet::DisplayPetDetails() {
  cout << "-------" << endl;
	cout << "Pet ID         --> " << petID << endl;
	cout << "pet name       --> " << petName << endl;
	cout << "pet breed      --> " << petBreed  << endl;
	cout << "Pet category   --> " << petCategoy << endl;
	cout << "Pet color      --> " << petColor << endl;
	cout << "Pet height     --> " << height << endl;
	cout << "Pet weight     --> " << weight <<endl<< endl;
	cout << "--------" << endl;

}