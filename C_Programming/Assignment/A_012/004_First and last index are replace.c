// WAP to Form a New String where the First Character and the Last Character have been Exchanged...
#include<stdio.h>
void replace_index(char*);
void main() {
	char str[20];
	printf("Enter a string: ");
	scanf("%s", &str);
	printf("String is: %s", str);
	
	replace_index(str);
	printf("\nReplace index string is: %s", str);
}

void replace_index(char* str) {
	int count = 0, temp;
	for (int i = 0;str[i] != '\0'; i++) {
		count++;
	}
	count--;
	temp = str[0];
	str[0] = str[count];
	str[count] = temp;
}