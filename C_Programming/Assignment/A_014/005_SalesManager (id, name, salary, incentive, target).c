// SalesManager (id, name, salary, incentive, target)..
#include<stdio.h>
struct Sales_Manager {
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};

void main() {
	struct Sales_Manager e1;
	printf("Enter Id, Name, Salary, Incentive and Target for Employee: ");
	scanf("%d %s %d %d %d", &e1.id, &e1.name, &e1.salary, &e1.incentive, &e1.target);
	printf("Id: %d \nName: %s \nSalary: %d \nIncentive: %d \nTarget: %d", e1.id, e1.name, e1.salary, e1.incentive, e1.target);
}