// Write a program to check the string is palindrome or not...
#include<stdio.h>
void FindPallindrome(char*);
void main() {
	char str[10];
	printf("Enter string : ");
	scanf("%s", str);

	FindPallindrome(str);
}

void FindPallindrome(char* str) {
	char temp[10], rev[10];
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++) {
		count++;
	}

	int i = 0, j = count-1;
	while (str[i] != '\0') {
		rev[i] = str[j];
		i++;
		j--;
	}

	rev[count] = '\0';
	int flag = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (rev[i] != str[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("String is pallindrome");
	} 
	else {
		printf("String is not pallindrome");
	}
}