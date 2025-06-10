// Accept the two numbers of users and an operator perform desire operations..

#include<stdio.h>
void main(){
	int a, b;
	char o;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	fflush(stdin);
	printf("Enter symbol : ");
	scanf("%c", &o);
	
	int res;
	
	if(o == '+'){
		res = a + b;
		printf("Addition is = %d", res);
	}
	else if(o == '-'){
		res = a - b;
		printf("Substraction is = %d", res);
	}
	else if(o == '/'){
		res = a / b;
		printf("Division is = %d", res);
	}
	else if(o == '*'){
		res = a * b;
		printf("Multiplication is = %d", res);
	}
	else{
		res = a % b;
		printf("Mod is %d", res);
	}
}