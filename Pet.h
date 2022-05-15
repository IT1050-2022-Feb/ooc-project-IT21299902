#pragma once

#include<iostream>
#define SIZE 3

class Pet
{
private:
	char petID[10];
	char petName[20];
	char petBreed[20];
	char petCategoy[20];
	char petColor[20];
	char height[20];
	char weight[20];

public:
	Pet();
	Pet(const char id[] ,const char name[] ,const char breed[] ,const char category[] ,const char color[] ,const char p_height[] ,const char p_weight[]);
	void DisplayDetails();

};

class Registerd_User {

private:
	char userId[20];
	char userName[20];
	Pet *Pet1[SIZE];

public:
	Registerd_User();
	void SetDetails(const char id[] ,const char name[]);
	void addPet(Pet* p1, Pet* p2, Pet* p3);
	void DisplayDetails();
};


