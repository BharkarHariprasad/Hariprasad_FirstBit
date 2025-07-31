// Sum of numbers in given range..
#include<stdio.h>
void printSum(int*);

void main() {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	
	printSum(&num);
}

void printSum(int *n) {
	int sum = 0;
	printf("\nSum of Given Number is: ");
	for (int i = 1; i <= *n; i++) {
		sum = sum + i;
	}
	printf("%d ", sum);
}