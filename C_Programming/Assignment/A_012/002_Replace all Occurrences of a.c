// WAP Replace all Occurrences of ‘a’ with $ in a String...
#include<stdio.h>
void replace(char*);
void main() {
	char str[20];
	printf("Enter string : ");
	scanf("%s", &str);
	printf("String is : %s", str);
	
	replace(str);
	printf("\nUpdated string is : %s", str);
}

void replace(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == 'a') {
			str[i] = '$';
		}
		i++;
	}
}