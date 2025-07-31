// Check given character is vowel or consonant..
#include<stdio.h>
void checkVowel_consonant();

void main() {
	checkVowel_consonant();
}

void checkVowel_consonant() {
	char ch;
	printf("Enter  Character: ");
	scanf("%c", &ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
	ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		printf("%c is Vowel", ch);
	}
	else {
		printf("%c is Consonant", ch);
	}
}