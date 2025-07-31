// Compares first n characters of two strings (strncmp)..
#include<stdio.h>
#include<string.h>
void main() {
	char str1[] = "Hello";
	char str2[] = "Hello World";
	int res;
	res = strncmp(str1, str2, 4);
	printf("First n number of string are same print 0 %d", res);
}