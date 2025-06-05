// Find greatest of three using nested if else..

#include<stdio.h>
void main(){
	int a = 111, b = 15, c = 14;
	
	if(a > b && b > c && c < a){
		printf("A is greater");
	}
	else if(a < b && b > c && c > a){
		printf("B is greater");
	}
	else{
		printf("C is greater");
	}
}