// Prit last 2 digit of number. (223410)

#include<stdio.h>
void main() {
	int num = 223410, r1;
	
	r1 = num % 100;

	printf("%d Print last two digits: \nLast two digit is- %d", num, r1);
}