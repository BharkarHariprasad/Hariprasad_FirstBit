// Accept the age and check if the person is: child, teenager, adult or senior..

#include<stdio.h>
void main(){
	int age;
	printf("Enter age: ");
	scanf("%d", &age);
	
	if(age < 12){
		printf("This is Child\n");
	}
	else if(age <= 19){
		printf("This is Teenager\n");
	}
	else if(age <= 59){
		printf("This is Adult\n");
	}
	else{
		printf("This is Senior\n");
	}
}