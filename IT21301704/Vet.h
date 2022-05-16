#include "reservation.h"

class Vet  //implimenting Vet class
{

private:
	char DocId[20];
	char Position[50];
	char UserName[50];
	char Password[20];
    reservation *r1[SIZE];
    int numberOFreservations;
public:
	Vet();
	Vet(const char d_DocId[], const char d_Position[] , const char d_UserNmae[] ,const char d_Password[]);
    void addreservation(reservation *r2);
	void displayDetails();
    ~Vet(); 
};

