#ifndef REGI
#define REGI

#include"user.h" 
#include "Pet.h"
#include "order.h"
#include "reservation.h"
#include "shopitem.h"
#include "Service.h"
#include "complaint.h"
#include "donation.h"
#include "feedback.h"
#define SIZE7 5

class registered_user;
class order;
class Donation;
class Feedback;
class reservation;
class Service;
class Complaint;

class registered_user:public User {
    private:

    char userID[20];
    char user_Name[20];
    char password[20];
    shopitem *item[SIZE7];
    Pet *Pet1[SIZE7];
    order *o1[SIZE7]; //unidirectional connection with registered user and order
    int numberOForders;
    Service* S1[SIZE7];
	int numberOFService;
    Complaint* com[SIZE7];
	int noOfComplaints;
    Donation* dod[SIZE7];
    int noOFdonations;
    Feedback* feed[SIZE7];
    int noOFfeedbacks;
    reservation *r1[SIZE7];//unidirectional connection with registered user and reservation
    int numberOFreservations;
    int numberOFitems;
    int numberOFpets;

    public:

    registered_user();
    registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]);
    void setUser(const char U_name[], const char u_Tp_NO[],const char u_Email[] , const char u_Address[], const char u_DOB[]);
    //Parameterized constructor
    void addPet(Pet* p1);
    void addreservation(reservation *r2);
    void addorder(order *o2);
    void additems(shopitem *I1);
    void addService( Service* S2);
    void copli(Complaint* c);
    void addDonation(Donation* dod1);
    void addFeedback(Feedback* feed1);
    void DisplayDetailFeedback();
    void DisplayDetailsDonation();
    void DisplayDetailscomplaint();
	void displayDetailsService();
    void displayDetailsshopitem();
    void displayDetailsorder();
    void displayDetailsreservation();
    void DisplayDetailsUser();
    void DisplayPDetailsPet();
    void DisplayDetailsRegUser();
    ~registered_user();
};
#endif
