// Accept array and print only prime numbers of array..
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

	printf("Prime numbers in Array is: ");
	for (int i = 0; i < size; i++) {

		int flag = 1;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			printf("%d ", arr[i]);
		}
	}
}