class Service
{
private:
	char ServiceID[10];
	char ServiceType[20];
public:
	Service();
	Service( const char id[], const char type[]);
	void DisplayDetails();
	~Service();
};