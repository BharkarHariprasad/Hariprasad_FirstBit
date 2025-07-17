// WAP to check if number is positive, negative or neutral..
#include<stdio.h>
void main() {
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	if (num < 0) {
		printf("%d is Negative", num);
	}
	else if (num > 0) {
		printf("%d is Positive", num);
	}
	else if (num == 0) {
		printf("%d is Neutral", num);
	}
}