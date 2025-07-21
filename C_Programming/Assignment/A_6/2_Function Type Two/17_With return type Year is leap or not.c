// WAP to check a given year a leap year..
#include<stdio.h>
int checkYear_leap();

void main() {
	int res;
	
	res = checkYear_leap();
	if (res == 1) {
		printf("Leap Year");
	}
	else {
		printf("Not Leap Year");
	}
}

int checkYear_leap() {
	int y, res;
	printf("Enter a Year: ");
	scanf("%d", &y);
	
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}