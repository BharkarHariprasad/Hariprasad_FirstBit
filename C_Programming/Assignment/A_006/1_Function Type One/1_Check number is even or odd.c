// Write a Program to check whether a number is even or odd..
#include<stdio.h>
void isEven_odd();

void main() {
	isEven_odd();
}

void isEven_odd() {
	int num;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("%d is Even", num);
	}
	else {
		printf("%d is Odd", num);
	}
}