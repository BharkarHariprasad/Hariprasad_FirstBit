// Check given character is vowel or consonant..
#include<stdio.h>
int checkVowel_consonant();

void main() {
	int res;
	res = checkVowel_consonant();
	
	if (res == 1) 
		printf("Is Vowel");
	else
		printf("Is Consonant");
}

int checkVowel_consonant() {
	char c;
	int res;
	printf("Enter  Character: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
	c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
		return 1;
	}
	else {
		return 0;
	}
}