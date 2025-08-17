// Copy string with mystrcpy function..
#include<stdio.h>
char* mystrcpy(char*, char*);
void main() {
	char str1[] = "Hello";
	char str2[10];
	printf("Before copy string : %s", str1);
	mystrcpy(str1, str2);
	printf("\nCopy string is: %s ", str2);
	
}
 
char* mystrcpy(char* str1, char* str2) {
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return str2;
}