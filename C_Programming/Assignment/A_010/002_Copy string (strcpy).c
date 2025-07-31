// copy string (strcpy)..
#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Solution";
	char str_cpy[10];
	strcpy(str_cpy, str, 2);
	printf("Copy str to str_cpy : %s", str_cpy);
}