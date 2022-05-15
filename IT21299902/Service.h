
class Service //implimenting Service class
{

private:
	char serviceId[20];
	char serviceType[30];
	char serviceName[80];
	float ChargPerhour;

public:
	Service(); //default constructor
	Service(const char id[], const char type[], const char name[], float charge); //parameterized constructor
	void DisplayServDetails();
  ~Service();

};
