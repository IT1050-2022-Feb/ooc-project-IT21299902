
#include"User.h"

class Unregistered_User : public User{ //inheritence to user class

public:
	Unregistered_User(); //default costructor
	void DisplayUnRegDetails();
};