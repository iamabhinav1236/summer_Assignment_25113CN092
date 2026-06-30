// Write a program to Create menu-driven array operations system. 

// Approach Used - Provide a menu with options (Insert, Delete, Display, Search), and perform operations on an array using functions and conditions.
// Difficulty Level - Tough
// Concept Used - Use of arrays, functions, loops, if-else conditions, and switch-case

#include <stdio.h>

void insertElement(int arr[], int *n);        // Function Declaration
void deleteElement(int arr[], int *n);        // Function Declaration
void displayArray(int arr[], int n);        // Function Declaration
void searchElement(int arr[], int n);        // Function Declaration

int main() 
{
    int arr[100], n = 0;                      // Array and size
    int choice;

    do 
    {
        printf("\n--- Menu-Driven Array Operations ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                insertElement(arr, &n);                     // Calling function
                break;
            case 2:
                deleteElement(arr, &n);                     // Calling function
                break;
            case 3:
                displayArray(arr, n);                     // Calling function
                break;
            case 4:
                searchElement(arr, n);                     // Calling function
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}

void insertElement(int arr[], int *n)         // Function Definition
{
    int value;
    printf("Enter element to insert: ");
    scanf("%d", &value);
    arr[*n] = value;
    (*n)++;
    printf("Element inserted successfully!\n");
}

void deleteElement(int arr[], int *n)
{
    int pos, i;
    if (*n == 0) {
        printf("Array is empty. Nothing to delete.\n");
        return;
    }
    printf("Enter position to delete (1-%d): ", *n);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }
    for (i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element deleted successfully!\n");
}

void displayArray(int arr[], int n)
{
    int i;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchElement(int arr[], int n)
{
    int value, i, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Element %d found at position %d.\n", value, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found in array.\n");
    }
}
