// WAP to check if the year is leap or not..

#include<stdio.h>
void main() {
	int year;
	printf("Enter a Year: ");
	scanf("%d", &year);
	
	if (year % 400 == 0) {
		printf("%d is Leap Year", year);
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		printf("%d is Leap Year", year);
	}
	else {
		printf("%d is not a Leap Year", year);
	}
}