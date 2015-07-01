#include "String.h"

String::String(){

}

String::String(const char* ch){
	this->ch = ch;
}

String String::operator+(String str){
	String temp;
	const char *ch1 = this->ch;
	const char *ch2 = str.ch;
	int tempLength = this->length + str.length;
	char* ch = new char[tempLength];
	for(int i=0;i<this->length;i++){
		ch[i]=ch1[i];
	}
	for(int i=0;i<str.length;i++){
		ch[i+this->length] = ch2[i];
	}
	temp.ch = ch;
	temp.length = tempLength;
	return temp;
}

String String::operator+(int number){
	String temp;
	char integerString[20];
	int counter = 0;
	while(number>0){
		int remainder = number % 10;
		integerString[counter++] = remainder+'0';
		number = number /10;
	}
	char *ch = new char[this->length+counter];
	for(int i=0;i<this->length;i++){
		ch[i]=this->ch[i];
	}
	for(int i=counter-1,j=0; i>=0; j++,i--){
		ch[this->length+j]=integerString[i];
	}
	ch[this->length+counter]='\0';
	temp.ch = ch;
	temp.length = this->length + counter;	
	return temp;
}

String operator+(int number, String str){
	String temp;
	char integerString[20];
	int counter = 0;
	while(number>0){
		int remainder = number % 10;
		integerString[counter++] = remainder + '0';
		printf("Remainder : %c \n", remainder +'0');
		number = number /10;
	}
	char *ch = new char[str.length+counter];
	counter--;
	for(int i=counter,j=0;i>=0;j++,i--){
		ch[j]=integerString[i];
	}
	for(int i=0;i<str.length;i++){
		ch[counter+i+1]=str.ch[i];
	}
	temp.ch = ch;
	temp.length = str.length+counter+1;
	return temp;
}

test