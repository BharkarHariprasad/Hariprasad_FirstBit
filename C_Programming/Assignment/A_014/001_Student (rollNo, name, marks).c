// Student (rollNo, name, marks)..
#include<stdio.h>
struct student {
	int rollnumber;
	char name[20];
	int marks;
};

void main() {
	struct student s1, s2, s3;
	printf("Enter rollnumber, name, marks of student: ");
	scanf("%d %s %d", &s1.rollnumber, &s1.name, &s1.marks);
	printf("Roll Number: %d \nName: %s \nMarks: %d", s1.rollnumber, s1.name, s1.marks);

	printf("\nEnter rollnumber, name, marks of student: ");
	scanf("%d %s %d", &s2.rollnumber, &s2.name, &s2.marks);
	printf("\nRoll Number: %d \nName: %s \nMarks: %d", s2.rollnumber, s2.name, s2.marks);
	
	printf("\nEnter rollnumber, name, marks of student: ");
	scanf("%d %s %d", &s2.rollnumber, &s2.name, &s2.marks);
	printf("\nRoll Number: %d \nName: %s \nMarks: %d", s3.rollnumber, s3.name, s3.marks);
}