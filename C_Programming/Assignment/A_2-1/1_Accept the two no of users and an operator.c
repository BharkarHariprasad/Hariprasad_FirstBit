// Accept the two numbers of users and an operator perform desire operations..

#include<stdio.h>
void main(){
	float a = 10, b = 15;
	char o = '/';
	float res;
	
	if(o == '+'){
		res = a + b;
		printf("Addition is = %f", res);
	}
	else if(o == '-'){
		res = a - b;
		printf("Substraction is = %f", res);
	}
	else if(o == '/'){
		res = a / b;
		printf("Division is = %f", res);
	}
	else if(o == '*'){
		res = a * b;
		printf("Multiplication is = %f", res);
	}
	else{
		res = a % b;
		printf("Mod is %f", res);
	}
}