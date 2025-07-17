// Print perfect number 1 to n..

#include <stdio.h>
void main() {
	int num, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0){
				sum = sum + j;
			}
		}
		if (sum == i){
			printf("%d\n", i);
		}
	}
}