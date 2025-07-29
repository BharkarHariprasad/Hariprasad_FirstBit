// Merge two Arrays..
#include<stdio.h>
void main() {
	int size;
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	int arr[size];
	int brr[size];
	int crr[size];
	
	printf("Enter Elements to scan in arr array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Enter Elements to scan in brr array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &brr[i]);
	}
	
	// copy arr to crr..
	for (int i = 0; i < size; i++) {
		crr[i] = arr[i];
	}
	
	// copy brr to crr..
	for (int i = 0; i < size; i++) {
		crr[size + i] = brr[i];
	}
	
	// print crr..
	printf("Merge two array is: ");
	for (int i = 0; i < size * 2; i++) {
		printf("%d ", crr[i]);
	}
}