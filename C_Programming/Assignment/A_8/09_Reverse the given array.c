// Reverse the given array..
#include<stdio.h>
void main() {
	int size;
	printf("Enter size of Array: ");
	scanf("%d", &size);
	int arr[size];
	
	printf("Enter elements to scan: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
	printf("\nRevers the given array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}