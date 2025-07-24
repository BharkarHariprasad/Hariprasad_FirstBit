// Take two array and add sum in third array..
#include<stdio.h>
void main() {
	int size;
	
	printf("Enter sizes of Array: ");
	scanf("%d", &size);
	
	int arr[size], brr[size], crr[size];
	
	printf("Enter number to scan Array arr: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &brr[i]);
	}
	
	printf("\nEnter number to scan Array brr: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < size; i++) {
		crr[i] = arr[i] + brr[i];
	}
	
	printf("Sum arr and brr Array is: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", crr[i]);
	}
}
