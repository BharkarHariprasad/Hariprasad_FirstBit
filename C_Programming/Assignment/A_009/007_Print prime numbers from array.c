// Print prime number from array..
#include<stdio.h>
void print_prime(int*, int);
void main() {
	int size;
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	
	int arr[size];
	printf("Enter elements of Array: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	print_prime(arr, size);
}

void print_prime(int* ptr, int n) {
	printf("Prime number in Array is: ");
	for (int i = 0; i < n; i++) {
		int flag = 0;
		for (int j = 2; j <= ptr[i] / 2; j++) {
			if (ptr[i] % j== 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("%d ", ptr[i]);
		}
	}
}