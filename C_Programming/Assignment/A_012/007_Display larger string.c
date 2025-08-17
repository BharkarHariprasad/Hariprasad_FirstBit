// WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions...
#include<stdio.h>
int large_string(char*, char*);
void main() {
	char str1[20];
	char str2[20];
	printf("Enter first string: ");
	scanf("%s", str1);
	printf("Enter second string: ");
	scanf("%s", str2);
	
	int res = large_string(str1, str2);
	if (res == 0) {
		printf("\nString first is greater: %s", str1);
	}
	else if (res == 1) {
		printf("\nString second is greater: %s", str2);
	}
	else {
		printf("String first and string second are equal: '%s' and '%s' .", str1, str2);
	}
}

int large_string(char* str1, char*str2) {
	int len1 = 0, len2 = 0;
	for (int i = 0; str1[i] != '\0'; i++) {
		len1++;
	}
	for (int i = 0; str2[i] != '\0'; i++) {
		len2++;
	}
	
	if (len1 > len2) {
		return 0;
	}
	else if (len1 < len2) {
		return 1;
	}
	else {
		return 2;
	}
}