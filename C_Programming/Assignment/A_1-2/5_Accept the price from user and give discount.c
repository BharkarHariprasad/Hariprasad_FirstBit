// Accept the price from user and give discount..

#include<stdio.h>
void main(){
	char c;
	printf("If you are student, say (Y) otherwise say (N) : ");
	scanf("%c", &c);
	float price;
	printf("Enter purchased price: ");
	scanf("%f", &price);
	float discount, final_price;
	
	if((c == 'y' || c == 'Y') && price > 500){
		final_price = price - price * 0.20; // Discount is 20%
	}
	else if((c == 'y' || c == 'Y') && price <= 500){
		final_price = price - price * 0.10; // Discount is 10%
	}
	else if((c == 'n' || c == 'N') && price > 600){
		final_price = price - price * 0.15; // Discount is 15%
	}
	else{
		final_price = price; // No discount
	}
	printf("Final price is %.2f\n", final_price);
}