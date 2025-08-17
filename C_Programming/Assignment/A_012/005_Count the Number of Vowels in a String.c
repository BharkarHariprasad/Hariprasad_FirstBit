// WAP to Count the Number of Vowels in a String...
#include<stdio.h>
char count_vowels(char*);
void main() {
	char str[20];
	printf("Enter a string: ");
	scanf("%s", &str);
	printf("String is: %s", str);
	
	int res = count_vowels(str);
	printf("\nVowels in string is: %d", res);
}

char count_vowels(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			count++;
		}
	}
	return count;
}