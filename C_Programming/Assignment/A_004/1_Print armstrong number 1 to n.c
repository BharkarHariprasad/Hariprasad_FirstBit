// Print armstrong number in the given range 1 to n...

#include <stdio.h>

void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    for(int i = 1; i <= num; i++) {
        int temp = i;
        int count = 0;

        int x = temp;
        while (x > 0) {
            count++;
            x = x / 10;
        }

        x = temp;
        int sum = 0;
        while (x > 0) {
            int rem = x % 10;
            int res = 1;

            for(int j = 1; j <= count; j++) {
                res = res * rem;
            }

            sum += res;
            x = x / 10;
        }
        if (sum == temp) {
            printf("%d ", temp);
        }
    }
}

