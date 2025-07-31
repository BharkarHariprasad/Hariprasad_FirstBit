// Ask the user to enter mark then show to grade..
#include<stdio.h>
int getGrade();

void main( ){
	int res = getGrade();
	
	if (res == 1) {
		printf("Distinction");
	}
	if (res == 2) {
		printf("First Class");printf("Pass");
	}
	if (res == 3) {
		printf("Second Class");
	}
	if (res == 4) {
		printf("Pass");
	}
	if (res == 5) {
		printf("Fail");
	}
}

int getGrade() {
	int mark;
	printf("Enter a Mark: ");
	scanf("%d", &mark);
	
	if (mark >= 75) {
		return 1;
	}
	else if (mark >= 65) {
		return 2;
	}
	else if (mark >= 55) {
		return 3;
	}
	else if (mark >= 40) {
		return 4;
	}
	else {
		return 5;
	}
}