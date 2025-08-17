// Find length of string mystrlen function..
#include<stdio.h> 
int mystrlen(char*);
void main() {
	char str[] = "FirstbitSolutions";
	mystrlen(str);
	printf("Length of string is: %d", mystrlen(str));
}

int mystrlen(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}