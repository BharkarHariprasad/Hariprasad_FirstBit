// Accept the price from user and give discount..
#include<stdio.h>
int getDiscount();

void main() {
	float fprice;
	fprice = getDiscount();
	if (fprice){
		printf("Final Prise is: %.2f", fprice);
	}
}

int getDiscount() {
	float purchase, discount;
	char ch;
	printf("Enter Purchase Value: ");
	scanf(" %f", &purchase);
	printf("Enter You are student (Yes or No): ");
	scanf(" %c", &ch);

	if (ch == 'y' || ch == 'Y') {
		if (purchase >= 500) {
			discount = purchase * 0.20;
			return purchase - discount;
		}
		else {
			discount = purchase * 0.10;
			return purchase - discount;
		}
	}
	else if (purchase >= 600) {
		discount = purchase * 0.10;
		return purchase - discount;
	}
	else {
		printf("No Discount \n");
		return purchase;
	}
}