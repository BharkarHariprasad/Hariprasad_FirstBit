// Calculate the salary based on basic..
#include<stdio.h>
void calculate_salary(float*);
void main() {
	float arr[1];
	printf("Enter Basic salary: ");
	scanf("%f", &arr[0]);
	
	calculate_salary(arr);
}

void calculate_salary(float* ptr) {
//		float basic = 5000;
	float da, ta, hra, total;
	
	if(*ptr <= 5000){
		da = *ptr * 0.10; // 0.10 mean 10 / 100
		ta = *ptr * 0.20;
		hra = *ptr * 0.25;
	}
	else{
		da = *ptr * 0.15;
		ta = *ptr * 0.25;
		hra = *ptr * 0.30;
	}
	
	total = *ptr + da + ta + hra;
	printf("Toatal salary is = %.2f", total);
}