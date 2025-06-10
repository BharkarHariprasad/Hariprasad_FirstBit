// Three side of triangle whether the triangle is equilateral, isosceles, or scalene..

#include<stdio.h>
void main(){
	float side1, side2, side3;
	printf("Enter side 1 : ");
	scanf("%f", &side1);
	
	printf("Enter side 2 : ");
	scanf("%f", &side2);
	
	printf("Enter side 3 : ");
	scanf("%f", &side3);
	
	if(side1 == side2 && side2 == side3 && side3 == side1){
		printf("Triangle is equilateral");
	}
	else if(side1 != side2 && side2 != side3 && side3 != side1){
		printf("Triangle is Scalene");
	}
	else{
		printf("Triangle is Isosceles");
	}
}
