// Combine string with mystrcat function..
#include<stdio.h>
void mystrcat(char*, char*);
void main() {
	char str1[30] = "Firstbit_";
	char str2[15] = "Solutions";
	printf("Print str1: %s", str1);
	printf("\nPrint str2: %s", str2);
	
	mystrcat(str1, str2);
	printf("\nCombain str1 and str2 in str1 is: %s", str1);
}

void mystrcat(char* str1, char* str2) {
	int i = 0, j = 0;
	while (str1[i] != '\0') {
		i++;
	}
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}