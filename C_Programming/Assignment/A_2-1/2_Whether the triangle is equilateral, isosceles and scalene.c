// Three side of triangle whether the triangle is equilateral, isosceles, or scalene..

#include<stdio.h>
void main(){
	float side1, side2, side3;
	side1 = 10;
	side2 = 10;
	side3 = 10;
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