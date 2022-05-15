#ifndef PAYMENT //File guard
#define PAYMENT
class payment {
    private:
    char paymentID[10];
    char paymentType[20];
    char payment_Status[20];
    float total_Amount;
    public:
    payment();
    payment(const char newpaymentID[],const char newpaymentType[],const char newPayment_Status[],float newttotal_Amount);
//Parameterized constructor
float getamount();
void displayDetails();
    ~payment();
};

#endif 