// Accept the price from user and give discount..
#include<stdio.h>
void getDiscount();

void main() {
	getDiscount();
}

void getDiscount() {
	float purchase, discount, fprice;
	char ch;
	printf("Enter Purchase Value: ");
	scanf(" %f", &purchase);
	printf("Enter You are student (Yes or No): ");
	scanf(" %c", &ch);

	if (ch == 'y' || ch == 'Y') {
		if (purchase >= 500) {
			discount = purchase * 0.20;
		}
		else {
			discount = purchase * 0.10;
		}
	}
	else if (purchase >= 600){
		discount = purchase * 0.15;
	}
	else {
		printf("No Discount \nFinal Prise is: %.2f", purchase);
	}
	fprice = purchase - discount;
	printf("Discount is: %.2f\nFinal Prise is: %.2f", discount, fprice);
}