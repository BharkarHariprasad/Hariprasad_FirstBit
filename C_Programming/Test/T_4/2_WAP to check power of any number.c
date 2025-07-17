// WAP to find power of any number..
#include<stdio.h>
int getpower(int);

void main() {
	int pow, res;
	printf("Enter Power: ");
	scanf("%d", &pow);
	
	res = getpower(pow);
	printf("\n%d ^ %d is : %d", pow, pow, res);
}

int getpower(int p) {
	int r = 1;
	for (int i = 1; i <= p; i++) {
		r = r * p;
	}
	return r;
}