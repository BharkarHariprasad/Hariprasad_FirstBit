// Date (date, month, year)..
#include<stdio.h>
struct date {
	int date;
	char month[20];
	int year;

};

void main() {
	struct date d1;
	printf("Enter Date, Month, Year for Employee: ");
	scanf("%d %s %d", &d1.date, &d1.month, &d1.year);
	printf("Date: %d \nMonth: %s \nYear: %d", d1.date, d1.month, d1.year);
}