// Swap to numbers using pointers..
#include<stdio.h>
void getSwap(int*, int*);

void main() {
	int a , b;
	printf("Enter Two Numbers: ");
	scanf("%d %d", &a, &b);
	printf("Before swaping a = %d and b = %d\n\n", a , b);
	
	getSwap(&a, &b);
	printf("After swaping a = %d and b = %d\n", a , b);
}

void getSwap(int* x, int* y) {
	printf("Before swaping address x = %d and y = %d\n", x , y);
	int temp = *x;
	*x = *y;
	*y = temp;
	
	printf("After swaping address x = %d and y = %d\n\n", x , y);
}