// Write a program to Create menu-driven string operations system. 

// Approach Used - Provide a menu with options (Length, Copy, Concatenate, Compare, Reverse), and perform operations on strings using functions and conditions.
// Difficulty Level - Tough
// Concept Used - Use of strings, functions, loops, if-else conditions, and switch-case

#include <stdio.h>
#include <string.h>

void stringOperations();                          // Function Declaration

int main() 
{
    stringOperations();                           // Calling function
    return 0;
}

void stringOperations()                           // Function Definition
{
    int choice;
    char str1[100], str2[100], result[200];

    do 
    {
        printf("\n--- Menu-Driven String Operations ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter a string: ");
                scanf("%s", str1);
                strcpy(result, str1);
                printf("Copied string: %s\n", result);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                int i, len = strlen(str1);
                for (i = 0; i < len; i++) {
                    result[i] = str1[len - i - 1];
                }
                result[len] = '\0';
                printf("Reversed string: %s\n", result);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);
}
