// Search the given number in array..
#include<stdio.h>
void main() {
	int size, search, flag = 0;
	printf("Enter size of Array: ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter number to scan: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the search number: ");
	scanf("%d", &search);

	printf("Print Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);

		if (arr[i] == search) {
			search = arr[i];
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("\nNumber is found %d in array", search);
	} else {
		printf("\nNumber not found");
	}
}
