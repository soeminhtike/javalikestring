class String{
private : 
	const char* ch;
	int length;
	
public :
	String();
	String(const char* ch);
	
	String operator+(String);
	String operator+(int);
	String operator+(float);
	String operator+(double);
	String operator+(long);
	friend String operator+(int , String);
	friend String operator+(float, String);
	friend String operator+(double, String);
	friend String operator+(long, String);
	String operator+(char);
	friend String operator+(char , String);
	String operator+(const char*);
	friend String operator+(const char* , String);
	
	String subString(int startIndex, int endIndex);
	char charAt(int index);
};
<<<<<<< HEAD
=======

test
>>>>>>> origin
