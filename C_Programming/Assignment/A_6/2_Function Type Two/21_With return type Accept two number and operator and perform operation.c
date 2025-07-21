// Accept two numbers and operator from user and perform the oprations..
#include<stdio.h>
int getOperation();

void main() {
	int res = getOperation();
	printf("%d", res);
}

int getOperation() {
	int  num1, num2, res;
	char  op;
	printf("Enter Operator: ");
	scanf(" %c", &op);
	printf("Enter two Numbers: ");
	scanf("%d %d", &num1, &num2);

	if (op == '+') {
		res = num1 + num2;
		printf("Sum of %d and %d is: ", num1, num2);
	}
	else if (op == '-') {
		if (num1 >
		 num2) {
			res = num1 - num2;
			printf("Subtraction of %d and %d is: ", num1, num2);
		}
		else {
			res = num2 - num1;
			printf("Subtraction of %d and %d is: ", num2, num1);
		}
	}
	else if (op == '/') {
		if (num1 > num2){
			res = num1 / num2;
			printf("Division of %d and %d is: ", num1, num2);
		}
		else {
			res = num2 / num1;
			printf("Division of %d and %d is: ", num2, num1);
		}
	}
	else if (op == '*') {
		res = num1 * num2;
		printf("Multiplication of %d and %d is: ", num1, num2);
	}
	else if (op == '%') {
		if (num1 > num2) {
			res = num1 % num2;
			printf("Modulus of %d and %d is: ", num1, num2);
		}
		else {
			res = num2 % num1;
			printf("Modulus of %d and %d is: ", num2, num1);
		}
	}
	else {
		printf("Enter valid Operator or Number");
	}
	return res;
}