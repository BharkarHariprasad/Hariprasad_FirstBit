// Write a Program to check given 3 digit number is palindrome or not..
#include<stdio.h>
int isPalindrome(int);

void main() {
		int num, digit, rev;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	rev = isPalindrome(num);
	if (num == rev){
		printf("%d is palindrome", num);
	}
	else {
		printf("%d is not palindrome", num);
	}
}

int isPalindrome(int n) {
	int digit, rev;
	while (n != 0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	return rev;
}