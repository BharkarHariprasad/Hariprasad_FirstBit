// WAP to Remove the nth Index Character from a Non-Empty String...
#include<stdio.h>
void remove_index(char*);
void main() {
	char str[20];
	printf("Enter a string : ");
	scanf("%s", &str);
	printf("String is : %s", str);
	
	remove_index(str);
	printf("\nRemove index: %s", str);
}

void remove_index(char* str) {
	int index;
	printf("\nEnter index you want to remove: ");
	scanf("%d", &index);
	for (int i = index; str[i] != '\0'; i++) {
		str[i] = str[i + 1];
	}
}