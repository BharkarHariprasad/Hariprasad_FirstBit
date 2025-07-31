// Compare two strings ignoring case (strcasecpy)..
#include<stdio.h>
#include<string.h>
void main() {
	char str1[] = "Solutions";
	char str2[] = "solutions";
	int res = _stricmp(str1, str2);
	if (res == 0) {
		printf("String is same: %d", res);
	}
	else {
		printf("String is not same: %d", res);
	}
}