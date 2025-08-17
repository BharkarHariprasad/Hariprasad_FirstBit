// Create a structure in array for employee..
#include<stdio.h>
typedef struct employee {
	int id, salary;
	char name[20];
} employee;

void search_employee(employee*);
void main() {
	employee arr[2];
	for (int i = 0; i < 2; i++) {
		printf("Enter deatails of employee %d: ", i + 1);
		scanf("%d %s %d", &arr[i].id, &arr[i].name, &arr[i].salary);
	}


	for (int i = 0; i < 2; i++) {
		printf("\nDisplay Employee Detail %d: ", i + 1);
		printf("\nId- %d : Name- %s : Salary- %d\n", arr[i].id, arr[i].name, arr[i].salary);
	}

	search_employee(arr);
}

void search_employee(employee* arr) {
	int search;
	printf("\nEnter Id to search Employee: ");
	scanf("%d", &search);
	for (int i = 0; i < 2; i++) {
		if (arr[i].id == search) {
			printf("\nId: %d \nName: %s \nSalary: %d", arr[i].id, arr[i].name, arr[i].salary);
			break;
		}
	}
	printf("\nNot Found");
}