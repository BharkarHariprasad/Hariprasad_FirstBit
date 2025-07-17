//  Write a menu driven program to take a number for user and perform operations as follows.
//  Press 1.To check number is even or odd.
// 	      2.To check number is prime or not.
//	      3.To check number is pallindrome or not.
// 	      4.To check number is positive, negative or zero.
// 	      5.To reverse a number.
//        6.To find sum of digits.

#include<stdio.h>
void main() {
	int num, menu;
	printf("Enter Number: ");
	scanf("%d", &num);

	printf("Enter number 1 to 6 to which operation you perform: ");
	scanf("%d", &menu);

	if (menu == 1) {
		if (num % 2 == 0) {
			printf("Number is Even");
		} else {
			printf("Number is Odd");
		}
	} else if (menu == 2) {
		int count;
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				count = 1;
				break;
			}
		}
		if (count == 0) {
			printf("Number is Prime");
		} else {
			printf("Number is not Prime");
		}
	} else if (menu == 3) {
		int temp, rev = 0, digit;
		temp = num;
		while (num > 0) {
			digit = num % 10;
			rev = rev * 10 + digit;
			num = num / 10;
		}
		if (temp == rev) {
			printf("Number is Palindrome");
		} else {
			printf("Number is not Palindrome");
		}
	} else if (menu == 4) {
		if (num > 0) {
			printf("Number is Positive");
		} else if (num < 0) {
			printf("Number is Negative");
		} else {
			printf("Number is Zero");
		}
	} else if (menu == 5) {
		int rev = 0, digit;
		while (num > 0) {
			digit = num % 10;
			rev = rev * 10 + digit;
			num = num / 10;
		}
		printf("Reverse is: %d ", rev);
	} else if (menu == 6) {
		int sum = 0, digit;
		while (num > 0) {
			digit = num % 10;
			sum = sum + digit;
			num = num / 10;
		}
		printf("Sum is: %d ", sum);
	}
}