// WAP to find greatest of three numbers..
#include<stdio.h>
int checkGreatest_three();

void main() {
	int res = checkGreatest_three();
	if (res == 1) {
		printf("%d is greater", res);
	}
	else if (res == 2) {
		printf("%d is greater", res);
	}
	else {
		printf("%d is greater", res);
	}
}

int checkGreatest_three() {
	int num1, num2, num3;
	printf("Enter three Numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
 	
 	if (num1 > num2 && num1 > num3) {
 		return num1;
	}
	else if (num2 > num1 && num2 > num3) {
		return num2;
	}
	else {
		return num3;
	}
}