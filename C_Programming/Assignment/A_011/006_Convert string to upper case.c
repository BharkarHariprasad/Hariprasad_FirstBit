// Convert string to upper case using mystrupper function..
#include<stdio.h>
void mystrupper(char*);
void main() {
	char str[] = "Hello";
	printf("Print str is: %s", str);
	
	mystrupper(str);
	printf("\nConvert string to upper case: %s", str);
}

void mystrupper(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
		i++;
	}
}