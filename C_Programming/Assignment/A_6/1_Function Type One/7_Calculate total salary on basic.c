// To calculate tatal salary..
#include<stdio.h>
void getTotal_salary();

void main() {
	getTotal_salary();
}

void getTotal_salary() {
	int basic, da, ta, hra, total;
	printf("Enter Basic Salary: ");
	scanf("%d", &basic);
	
	if (basic <= 5000) {
		da = basic * 0.10;
		ta = basic * 0.20;
		hra = basic * 0.25;
	}
	else {
		da = basic * 0.15;
		ta = basic * 0.25;
		hra = basic * 0.30;
	}
	total = basic + da + ta + hra;
	printf("Total salary is: %d", total);
}