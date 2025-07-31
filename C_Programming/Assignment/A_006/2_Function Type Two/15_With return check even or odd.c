// Write a Program to check whether a number is even or odd..
#include<stdio.h>
int isEven_odd(int);

void main() {
	int num, res;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	res = isEven_odd(num);
	
	if (res){
		printf("%d is Even", num);
	}
	else {
		printf("%d is Odd", num);
	}
}

int isEven_odd(int n) {
	return n % 2 == 0;
}