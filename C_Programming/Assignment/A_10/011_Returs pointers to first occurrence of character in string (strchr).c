// Returs pointers to first occurrence of character in string (strchr)..
#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Hello World";
	char* ch;
	ch = strchr(str, 'W');
	printf("%s", ch);
}