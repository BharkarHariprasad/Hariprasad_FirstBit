// Find the grade of students in their marks..

#include<stdio.h>
void main(){
	int marks;
	printf("Enter a Marks : ");
	scanf("%d", &marks);
	
	if(marks > 75){
		printf("Distinction");
	}
	else if(marks > 65){
		printf("First Class");
	}
	else if(marks > 55){
		printf("Second Class");
	}
	else if(marks >= 40){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}