#include <iostream>

#include "String.h"

using namespace std;

int main(){
	String name="Soe Min Htike";
	name = name + 'c' + "hello";
	printf("My name is : %s ", name);
	return 0;
}