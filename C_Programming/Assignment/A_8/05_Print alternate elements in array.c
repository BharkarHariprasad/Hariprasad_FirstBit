// Print alternate elements in array..
#include<stdio.h> 
#include<stdio.h>
void main() {
	int size;
	printf("Enter size of Array: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter number to scan Array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Array is: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\nPrint alternate element in array: ");
	for (int i = 0; i < size; i = i + 2) {
		printf("%d ", arr[i]);
	}
}