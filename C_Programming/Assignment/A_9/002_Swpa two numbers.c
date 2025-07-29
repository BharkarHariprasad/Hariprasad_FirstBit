// Swap two numbers..
#include<stdio.h>
void Swaptwo_numbers(int*);
void main() {
	int size;
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter elements of Array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	Swaptwo_numbers(arr);
	printf("After swaping A is: %d, and B is: %d", arr[0], arr[1]);
}

void Swaptwo_numbers(int* ptr) {
	int temp = ptr[0];
	ptr[0] = ptr[1];
	ptr[1] = temp;
}