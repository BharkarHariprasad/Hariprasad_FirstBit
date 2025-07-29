// Check leap year or not..
#include<stdio.h>
void checkleap_year(int*);
void main() {
	int arr[1];
	printf("Enter Year: ");
	scanf("%d", &arr[0]);
	
	checkleap_year(arr);
}

void checkleap_year(int* ptr) {
	if (*ptr % 4 == 0 && *ptr % 100 != 0 || *ptr % 400 == 0) {
		printf("%d is Leap Year", *ptr);
	}
	else {
		printf("%d is not Leap Year", *ptr);
	}
} 