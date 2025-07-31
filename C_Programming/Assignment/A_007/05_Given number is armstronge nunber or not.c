// Check the given number is Armstrong number or not..
#include<stdio.h>
void checkArmstrong(int*);

void main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    checkArmstrong(&num);
}

void checkArmstrong(int* n) {
    int count = 0, temp, digit, sum = 0;
    temp = *n;

    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = *n;

    while (temp > 0) {
        digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == *n) {
        printf("%d is Armstrong Number\n", *n);
    } else {
        printf("%d is not Armstrong Number\n", *n);
    }
    
}