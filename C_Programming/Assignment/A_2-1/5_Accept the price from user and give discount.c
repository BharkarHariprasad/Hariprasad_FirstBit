// Accept the price from user and give discount..

#include<stdio.h>
void main(){
	float price_stu = 505;
	float price_oth = 600; 
	float final_price;
	
	if(500 > price_stu){
		final_price = price_stu - price_stu * 0.2;
		printf("Student Dsicount is 20%%\nFinal price is = %f\n", final_price);
	}
	else if(500 < price_stu){
		final_price = price_stu - price_stu * 0.1;
		printf("Student Discount is 10%%\nFinal price is = %f\n", final_price);
	}
	if(600 > price_oth){
		final_price = price_oth - price_oth * 0.15;
		printf("Other Discount is 15%%\nFinal price is = %f\n", final_price);
	}
	else{
		printf("Other No Discount\nFinal price is = %f", price_oth);
	}
}