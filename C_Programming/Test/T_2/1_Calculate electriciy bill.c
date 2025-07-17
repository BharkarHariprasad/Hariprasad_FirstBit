// WAP to calculate eletricity bill..
#include<stdio.h>
void main() {
	int unit, bill;
	printf("Enter unit: ");
	scanf("%d", &unit);
	
	if (unit <= 50) {
		bill = unit * 30;
	}
	else if (unit <= 150) {
		bill = unit * 40;
	}
	else {
		bill = unit * 50;
	}
	
	printf("Eectricity bill is: %d", bill);
}