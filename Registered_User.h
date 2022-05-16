

class registered_user //implimenting Registered_User class
{
    private:
    char userID[20];
    char user_Name[20];
    char password[20];
    shopitem *item[SIZE];
    public:
    registered_user();
    registered_user(const char newuser_ID[],const char newuser_Name[],const char newpassword[]);
    void displayDetails();
    void additems(shopitem *I1,shopitem *I2,shopitem *I3,shopitem *I4);
    ~registered_user();
};



