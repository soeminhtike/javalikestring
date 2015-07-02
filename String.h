class String{
private : 
	const char* ch;
	int length;
	
public :
	String();
	String(const char* ch);	
	String operator+(String);
	String operator+(int);
	String operator+(char);
	String operator+(const char*);
	friend String operator+(int , String);
};
