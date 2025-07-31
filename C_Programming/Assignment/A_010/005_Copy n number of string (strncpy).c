// Copy n number of string (strncpy)..
#include<stdio.h>
#include<string.h>
void main() {
	char str1[20] = "Firstbit Solution";
	char str2[20];
	strncpy(str2, str1, 5);
	printf("Copy n number of string is: %s", str2);
}