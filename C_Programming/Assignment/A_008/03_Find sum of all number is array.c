// Find sum of all numbers..
#include<stdio.h>
void main() {
	int size, sum = 0;
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
		sum = sum + arr[i];
	}
	printf("\nSum of Array is: %d", sum);
}