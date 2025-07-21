// Check person is eligible for vote or not..
#include<stdio.h>
void checkEligible_vote();

void main() {
	checkEligible_vote();
}

void checkEligible_vote() {
	int age;
	printf("Enter Age: ");
	scanf("%d", &age);
	
	if (age >= 18) {
		printf("Person is Eligible for vote");
	}
	else {
		printf("Person is not Eligible for vote");
	}
}