// Compares two strings Lexicographically (strcmp)..
#include<stdio.h>
#include<string.h>
void main() {
	char str1[] = "Firstbit";
	char str2[] = "Firstbit";
	int res = strcmp(str1, str2);
	if (res == 0) {
		printf("Sting Match: %d", res);
	}
	else {
		printf("Not Match");
	}
}