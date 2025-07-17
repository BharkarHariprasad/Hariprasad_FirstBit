// Pritn even or odd number to given range..
#include<stdio.h>
void getEven_odd(int, int);
void main() {
	int start, end;
	printf("Enter starting and ending number: ");
	scanf("%d %d", &start, &end);

	getEven_odd(start, end);
}

void getEven_odd(int a, int b) {
	printf("Even number: ");
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\nOdd number: ");
	for (int i = a; i <= b; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
		}
	}
}