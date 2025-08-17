// Write a program to scan string from user then scan a single character and search it in a accepted string...
#include<stdio.h>
void strsearch(char*);
void main() {
	char str[20];
	printf("Enter a string : ");
	scanf("%s", &str);
	printf("\nString is: %s", str);
	
	strsearch(str);
}

void strsearch(char* str) {
	char search;
	printf("\nEnter a character you want ot search from string: ");
	scanf(" %c", &search);
	
	int i = 0, flag = 0;
	while (str[i] != '\0') {
		if (str[i] == search) {
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1) {
		printf("\nCharacter found in string");
	}
	else {
		printf("\nCharacter not found in string");
	}
}