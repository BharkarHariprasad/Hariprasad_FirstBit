// Find greatest of three using nested if else..

#include<stdio.h>
void main(){
	int a, b, c;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	printf("Enter third number : ");
	scanf("%d", &c);
	
	if(a > b && b > c && a > c){
		printf("First is greater");
	}
	else if(b > a && b > c && c < a){
		printf("Second is greater");
	}
	else{
		printf("Third is greater");
	}
}