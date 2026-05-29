// Write a program to Count digits in a number. 
#include <stdio.h>

 int main() {
    long long int num, count = 0;  // here we are using long long int to handle larger numbers as it can store up to 19 digits

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) {
            num = -num;  // convert negative to positive
        }

        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}