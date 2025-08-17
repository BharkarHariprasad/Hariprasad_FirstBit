// Employee (id, name, salary)..
#include<stdio.h>
struct id {
	int id;
	char name[20];
	int salary;
};

void main() {
	struct id e1, e2;
	printf("Enter Id, name, salary of Employee: ");
	scanf("%d %s %d", &e1.id, &e1.name, &e1.salary);

	printf("Enter Id, name, salary of Employee: ");
	scanf("%d %s %d", &e2.id, &e2.name, &e2.salary);
	
	printf("Id: %d \nName: %d \nSalary: %d", e1.id, e1.name, e1.salary);
	printf("\nId: %d \nName: %d \nSalary: %d", e2.id, e2.name, e2.salary);
}