// WAP to Remove the Characters of Odd Index Values in a String...
#include<stdio.h>
void printeven(char*, char*);
void main() {
	char str1[20];
	char str2[20];
	printf("Enter your string : ");
	scanf("%s",str1);
	printf("String is: %s", str1);
	
	printeven(str1,str2);
	printf("\nRemove odd index value is: %s", str2);
}

void printeven(char* str1, char* str2) {
	int j=0;
	for(int i = 0; str1[i] != '\0'; i++) {
		if(i % 2 == 0) {
			str2[j] = str1[i];
			j++;
		}
		
	}
	str2[j] = '\0';
}