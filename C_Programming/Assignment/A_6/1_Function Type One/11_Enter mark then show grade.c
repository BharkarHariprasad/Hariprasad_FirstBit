// Ask the user to enter mark then show to grade..
#include<stdio.h>
void getGrade();

void main( ){
	getGrade();
}

void getGrade() {
		int mark;
	printf("Enter a Mark: ");
	scanf("%d", &mark);
	
	if (mark >= 75) {
		printf("Distinction");
	}
	else if (mark >= 65) {
		printf("First Class");
	}
	else if (mark >= 55) {
		printf("Second Class");
	}
	else if (mark >= 40) {
		printf("Pass");
	}
	else {
		printf("Fail");
	}
}