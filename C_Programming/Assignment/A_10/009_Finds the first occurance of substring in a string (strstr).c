// Finds the first occurance of substring in a string (strstr)..
#include<stdio.h>
#include<string.h>
void main() {
	char str1[] = "Firstbit Solutions";
	char *str2;
	str2 = strstr(str1, "Firstbit");
	printf("%s", str2);
	
}