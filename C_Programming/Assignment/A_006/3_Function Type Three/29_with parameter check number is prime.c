// Check the given number is prime or not..
#include<stdio.h>
void checkPrime(int);

void main() {
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	
	checkPrime(num);
}

void checkPrime(int n) {
	int flag = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("Number is not Prime");
	}
	else {
		printf("Number is Prime");
	}
}