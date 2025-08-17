// HR (id, name, salary, commission)..
#include<stdio.h>
struct Hr {
	int id;
	char name[20];
	int salary;
	int commission;
};

void main() {
	struct Hr e1;
	printf("Enter Id, Name, Salary, Commission for Employee: ");
	scanf("%d %s %d %d", &e1.id, &e1.name, &e1.salary, &e1.commission);
	printf("Id: %d \nName: %s \nSalary: %d \nCommission: %d", e1.id, e1.name, e1.salary, e1.commission);
}
	