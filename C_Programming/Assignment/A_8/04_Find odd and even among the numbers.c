// Find odd and even among the numbers..
#include<stdio.h>
void main() {
	int size, flag = 0;
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
	printf("\nEven numbers are: ");
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	
	printf("\nOdd numbers are: ");
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
}