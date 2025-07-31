// Print prime number from array..
#include<stdio.h>
int print_prime(int, int);
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
	for (int i = 0; i < size; i++) {
		for (int j = 2; j <= arr[i] / 2; j++) {
			if (arr[i] % j != 0) {
				printf("%d ", arr[i]);
			}
		}
	}
}