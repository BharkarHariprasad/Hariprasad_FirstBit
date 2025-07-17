// WAP to print given range of factors..
#include<stdio.h> 
void getfactors(int, int);
void main() {
	int start, end;
	printf("Enter start and end number: ");
	scanf("%d %d", &start, &end);
	
	getfactors(start, end);
}

void getfactors(int a, int b) {
	for (int i = a; i <= b; i++) {
		printf("\n%d ", i);
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
			printf("%d, ", j);
		}
	
	}
}