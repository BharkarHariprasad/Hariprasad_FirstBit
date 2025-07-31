// Accept two numbers and operator from user and perform the oprations..
#include<stdio.h>
void getOperation();

void main() {
	getOperation();
}

void getOperation() {
	int  num1, num2, res;
	char  op;
	printf("Enter Operator: ");
	scanf(" %c", &op);
	printf("Enter two Numbers: ");
	scanf("%d %d", &num1, &num2);

	if (op == '+') {
		res = num1 + num2;
		printf("Sum of %d and %d is: %d", num1, num2, res);
	}
	else if (op == '-') {
		if (num1 - num2) {
			res = num1 - num2;
			printf("Substraction of %d and %d is: %d", num1, num2, res);
		}
		else {
			res = num2 - num1;
			printf("Substraction of %d and %d is: %d", num2, nu1, res);
		}
	}
	else if (op == '/') {
		if (num1 > num2){
			res = num1 / num2;
			printf("Division of %d and %d is: %d", num1, num2, res);
		}
		else {
			res = num2 / num1;
			printf("Division of %d and %d is: %d", num2, num1, res);
		}
	}
	else if (op == '*') {
		res = num1 * num2;
		printf("Multiplication of %d and %d is: %d", num1, num2, res);
	}
	else if (op == '%') {
		if (num1 > num2) {
					res = num1 % num2;
		printf("Modulas of %d and %d is: %d", num1, num2, res);
		}
		else {
			res = num2 % num1;
		printf("Modulas of %d and %d is: %d", num2, num1, res);
		}
	}
	else {
		printf("Enter valid Operator or Number");
	}
}