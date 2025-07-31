// WAP to find greatest of three numbers..
#include<stdio.h>
void checkGreatest_three();

void main() {
	checkGreatest_three();
}

void checkGreatest_three() {
	int num1, num2, num3;
	printf("Enter three Numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
 	
 	if (num1 > num2 && num1 > num3) {
 		printf("Number 1 is greater");
	}
	else if (num2 > num1 && num2 > num3) {
		printf("Number 2 is greater");
	}
	else {
		printf("Number 3 is greater");
	}
}