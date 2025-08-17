// Copy string to n number of sting using mystrncpy function..
#include<stdio.h>
void mystrncpy(char*, char*, int);
void main() {
	char str1[] = "FirstBit_Solutions";
	char str2[20];
	int n = 12;
	
	mystrncpy(str1, str2, n);
	printf("Copy string to n number is: %s", str2);
}

void mystrncpy(char* str1, char* str2, int n) {
	int i = 0;
	while (i < n) {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}