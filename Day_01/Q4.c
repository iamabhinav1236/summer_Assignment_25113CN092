// Write a program to Count digits in a number. 

// Approach Used- We can count the digits by repeatedly dividing the number by 10 until it becomes 0. Each time we divide, we increment a count variable. 
//                If the number is negative, we can convert it to positive before counting. If the number is 0, it has 1 digit.
// Difficulty Level- Easy
// Concept Used- Use of loops and Knowledge of Numbers .

#include <stdio.h>

 int main() 
 {
    long long int num, count = 0;  // here we are using long long int to handle larger numbers as it can store up to 19 digits

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) 
    {
        count = 1;
    } 
    else 
    {
        if (num < 0) 
        {
            num = -num;  // convert negative to positive
        }

        while (num != 0) 
        {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}