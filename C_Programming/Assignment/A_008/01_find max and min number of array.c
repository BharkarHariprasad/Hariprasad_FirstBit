// Find minimum and maximum number in array..
#include<stdio.h>
void main() {
	int arr[5];
	printf("Enter Elements of Array: ");
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0];
	int min = arr[0];
	printf("Print Elements Of Array is: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
		
		if (arr[i] > max) {
            max = arr[i];
        }
//		if (arr[i] < min) {
//			min = arr[i];
//		}
	}
	printf("\nPrint maximum number in Array: %d", max);
	
}