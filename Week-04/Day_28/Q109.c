// Write a program to Create library management system. 

// Approach Used - Store book details (ID, title, author) in an array of structures, and provide menu options to add, display, and search books.
// Difficulty Level - Medium
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
};

void addBook(struct Book books[], int *count);                      // Function Declaration
void displayBooks(struct Book books[], int count);                      // Function Declaration
void searchBook(struct Book books[], int count, int id);                      // Function Declaration

int main() 
{
    struct Book books[100];                 // Array of book records
    int count = 0;                   // Number of books
    int choice, id;

    do 
    {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addBook(books, &count);                       // Calling Function
                break;
            case 2:
                displayBooks(books, count);                       // Calling Function
                break;
            case 3:
                printf("Enter book ID to search: ");
                scanf("%d", &id);
                searchBook(books, count, id);                       // Calling Function
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

void addBook(struct Book books[], int *count)                 // Function Definition
{
    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter title: ");
    scanf("%s", books[*count].title);
    printf("Enter author: ");
    scanf("%s", books[*count].author);

    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book books[], int count)                 // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Book Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
    }
}

void searchBook(struct Book books[], int count, int id)                 // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            printf("Record Found: ID: %d, Title: %s, Author: %s\n", books[i].id, books[i].title, books[i].author);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No book found with ID %d.\n", id);
    }
}
