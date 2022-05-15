class Pet  //implimenting pet class
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
	Pet(); //default constructor
	Pet(const char id[] ,const char name[] ,const char breed[] ,const char category[] ,const char color[] ,const char p_height[] ,const char p_weight[]);
	void DisplayPetDetails();

};
