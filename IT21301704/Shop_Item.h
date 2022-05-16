

class shopitem //implimenting Shop_Item class
{
    private:
    char itemID[20];
    char item_Name[50];
    char item_Category[20];
    float item_Price;
    public:
    shopitem();
    shopitem(const char newitemID[],const char newitem_Name[],const char newitem_Category[],float newitem_Price);
    void displayDetails();
    ~shopitem();

};