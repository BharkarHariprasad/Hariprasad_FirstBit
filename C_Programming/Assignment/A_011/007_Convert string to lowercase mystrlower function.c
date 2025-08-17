// Convert string to lowercase mystrlower function..
#include<stdio.h>
void mystrlower(char*);
void main() {
	char str[] = "FIRSTBIT";
	printf("String is: %s", str);
		
	mystrlower(str);
	printf("\nConvert string to lowercase is: %s", str);
}

void mystrlower(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		i++;
	}
}