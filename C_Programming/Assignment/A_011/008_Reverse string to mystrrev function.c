// Reverse string to mystrrev function..
void mystrrev(char*);
#include<stdio.h>
void main() {
	char str[] = "Hello";
	printf("String is: %s", str);
	
	mystrrev(str);
	printf("\nReverse string is: %s", str);
}

void mystrrev(char* str) {
int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}