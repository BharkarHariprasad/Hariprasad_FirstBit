// Delete Employee by Name..
#include<stdio.h>
#include<string.h>
typedef struct employee {
	int id, salary;
	char name[20];
} employee;

void delete_Employee(arr);
void main() {
	employee arr[2];
	for (int i = 0; i < 1; i++) {
		printf("Enter deatails of employee %d: ", i + 1);
		scanf("%d %s %d", &arr[i].id, &arr[i].name, &arr[i].salary);
	}


	for (int i = 0; i < 1; i++) {
		printf("\nDisplay Employee Detail %d: ", i + 1);
		printf("\nId- %d : Name- %s : Salary- %d\n", arr[i].id, arr[i].name, arr[i].salary);
	}
	delete_Employee(arr);
}

void delete_Employee(arr) {
	char name[20];
	printf("Enter name for delete employee: ");
	scanf("%s", &name);
	printf("%s", name);
	if (strcmp(arr == name)) {
		
	} 
}