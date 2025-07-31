// Print prime number in the given range 1 to n..

#include <stdio.h>
void main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++) {
		int prime = 1;

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
				
		}
		if (prime == 1)
		
		printf("%d ", i);
	}
}
