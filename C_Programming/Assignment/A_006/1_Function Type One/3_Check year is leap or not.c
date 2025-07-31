// WAP to check a given year a leap year..
#include<stdio.h>
void checkYear_leap();

void main() {
	checkYear_leap();
}

void checkYear_leap() {
	int year;
	printf("Enter a Year: ");
	scanf("%d", &year);
	
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d is Leap Year", year);
	}
	else {
		printf("%d is not Leap Year", year);
	}
}