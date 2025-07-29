// Print Even and Odd numbers..
#include<stdio.h>
void printEven_odd(int*, int);
void main() {
	int size;
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter elements of Array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	printEven_odd(arr, size);
}

void printEven_odd(int* ptr, int n) {
	printf("Even numbers are: ");
	for (int i = 0; i < n; i++) {
		if (ptr[i] % 2 == 0) {
			printf("%d ", ptr[i]);
		}
	}
	
	printf("\nOdd numbers are: ");
	for (int i = 0; i < n; i++) {
		if (ptr[i] % 2 != 0) {
			printf("%d ", ptr[i]);
		}
	}
}
