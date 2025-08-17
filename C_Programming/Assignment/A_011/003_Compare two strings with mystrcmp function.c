// Compare two strings with mystrcmp function..
#include<stdio.h>
int mystrcmp(char*, char*);
void main() {
	char str1[] = "Firstbit";
	char str2[] = "Firstbit";
	
	int res = mystrcmp(str1, str2);
	if (res == 0) {
		printf("Strings are same");
	}
	else {
		printf("Strings are not same");
	}
}

int mystrcmp(char* str1, char* str2) {
	int flag = 0;
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1) {
		return 1;
	}
	else 
		return 0;
}