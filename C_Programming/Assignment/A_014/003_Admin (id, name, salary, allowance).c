// Admin (id, name, salary, allowance)..
#include<stdio.h>
struct admin {
	int id;
	char name[20];
	int salary;
	double allowance;
};

void main() {
	struct admin e1;
	printf("Enter Id, Name, Salary, Allownce of Employee: ");
	scanf("%d %s %d %lf", &e1.id, &e1.name, &e1.salary, &e1.allowance);
	printf("Id: %d \nName: %s \nSalary: %d \nAllownce: %f", e1.id, e1.name, e1.salary, e1.allowance);
}		