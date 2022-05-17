#ifndef VET
#define VET

#include"user.h"
#include "reservation.h"
#define SIZE1 2
class Vet;
class reservation;

class Vet :public User {  //inheritance with user class

private:
	char DocId[20];
	char Position[50];
	char UserName[50];
	char Password[20];
    reservation *r1[SIZE1];
    int numberOFreservations;

public:
	Vet();
    Vet(const char d_DocId[], const char d_Position[] , const char d_UserNmae[] ,const char d_Password[]);
	void SetDetails(const char d_DocId[], const char d_Position[] , const char d_UserNmae[] ,const char d_Password[]);
void setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]);
    void addreservation(reservation *r2);
	void DisplayDocDetails();
    void displayDetailsReservation();
    ~Vet(); 
};
#endif