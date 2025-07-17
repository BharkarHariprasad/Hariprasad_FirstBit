// Print given range alternate number sum..
#include<stdio.h>
int sumAlternate_num(int, int);

void main() {
	int start, end, res;
	printf("Enter start and end number: ");
	scanf("%d %d", &start, &end);
	
	res = sumAlternate_num(start, end);
	printf("\nSum of alternate number is: %d", res);
}

int sumAlternate_num(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i = i + 2) {
		printf("%d ", i);
		sum = sum + i;
	}
	return sum;
}