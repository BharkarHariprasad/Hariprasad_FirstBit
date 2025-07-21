// To check given character is lowercase or uppercase..
#include<stdio.h>
void checkUppercase_lowercase();

void main() {
	checkUppercase_lowercase();
}

void checkUppercase_lowercase() {
	char ch;
	printf("Enter Character: ");
	scanf(" %c", &ch);
	
	if (ch >= 'a' && ch <= 'z') {
		printf("Character is Lowercase");
	} 
	else if (ch >= 'A' && ch <= 'Z') {
		printf("Character is Uppercase");
	}
}