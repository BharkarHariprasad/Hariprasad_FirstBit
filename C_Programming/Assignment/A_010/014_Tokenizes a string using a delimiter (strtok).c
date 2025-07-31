// Tokenizes a string using a delimiter (strtok)..
#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Firstbit, Solutions, Pvt";
	char* ch;
	ch = strtok(str, ",");
	
	while (ch != '\0') {
		printf("%s ", ch);
		
		ch = strtok('\0', ",");
	}
}