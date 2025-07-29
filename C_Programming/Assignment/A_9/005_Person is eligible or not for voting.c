// Person is eligible or not for voting..
#include<stdio.h>
void Voting_eligible(int*);
void main() {
	int arr[1];
	printf("Enter Age: ");
	scanf("%d", &arr[0]);
	
	Voting_eligible(arr);
}

void Voting_eligible(int* ptr) {
	if (*ptr >= 18) {
		printf("Person is Eligible for voting");
	}
	else {
		printf("Person is not Eligible for voting");
	}
}