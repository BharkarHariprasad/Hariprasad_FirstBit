// Write a Program to check given 3 digit number is palindrome or not..
#include<stdio.h>
void isPalindrome();

void main() {
	isPalindrome();
}

void isPalindrome() {
	int num, digit, rev, ori;
	printf("Enter a Number: ");
	scanf("%d", &num);
	ori = num;
	
	while (num != 0){
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	printf("%d\n",rev);
	if (ori == rev){
		printf("Number is palindrome");
	}
	else {
		printf("Number is not palindrome");
	}
}