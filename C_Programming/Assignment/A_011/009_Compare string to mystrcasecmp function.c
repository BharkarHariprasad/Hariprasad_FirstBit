// Compare string to mystrcasecmp function..
#include<stdio.h>
int mystrcasecmp(char*, char*);
void main() {
	char str1[] = "HELLo";
	char str2[] = "Hello";
	
	int res = mystrcasecmp(str1, str2);
	if (res == 1) {
		printf("Strings are not same");
	}
	else {
		printf("String are same");
	}
}

int mystrcasecmp(char* str1, char* str2) {
	int i = 0, flag = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str1[i] + 32;
		}
		if (str2[i] >= 'A' && str2[i] <= 'Z') {
			str2[i] = str2[i] + 32;
		}
		
		if (str1[i] != str2[i]) {
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1) {
		return 1;
	}
	else {
		return 0;
	}
}