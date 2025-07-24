// Print numbers from 1 to n..
#include<stdio.h>
void printNumbers(int*);

void main() {
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	printNumbers(&num);

}

void printNumbers(int* n) {
	for (int i = 1; i <= *n; i++) {
		printf("%d ", i);
	}
}