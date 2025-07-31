// To check given character is lowercase or uppercase..
#include<stdio.h>
int checkUppercase_lowercase();

void main() {
	
	int res = checkUppercase_lowercase();
	if (res) {
		printf("Character is Lowercase");
	} 
	else {
		printf("Character is Uppercase");
	}
}

int checkUppercase_lowercase() {
	char ch;
	printf("Enter Character: ");
	scanf(" %c", &ch);
	
	return ch >= 'a' && ch <= 'z';
}