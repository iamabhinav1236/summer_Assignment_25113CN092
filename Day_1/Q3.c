// Write a program to Find factorial of a number. 

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } 
    else {
        for (int i = 1; i <= num; i++) 
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}