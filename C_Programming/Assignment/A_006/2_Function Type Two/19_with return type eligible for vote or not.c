// Check person is eligible for vote or not..
#include<stdio.h>
int checkEligible_vote();

void main() {
	int res;
	res = checkEligible_vote();
	
	if (res) {
		printf("Person is Eligible for vote");
	}
	else {
		printf("Person is not Eligible for vote");
	}
}

int checkEligible_vote() {
	int age;
	printf("Enter Age: ");
	scanf("%d", &age);
	
	return age >= 18;
}