// Print table for given number..
#include<stdio.h>
void printfTable(int);

void main() {
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	printfTable(num);
}

void printfTable(int n) {
	int table;
	for (int i = 1; i <= 10; i++) {
		for (int j = n; j <= n; j++) {
			table = j * i;
			printf("%d * %d = %d\n", n, i, table);
		}
	}
}