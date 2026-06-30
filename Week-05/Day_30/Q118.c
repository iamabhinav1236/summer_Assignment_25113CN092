// Write a program to Create mini library system. 

// Approach Used - Store book details (ID, title, author, status) in an array of structures, and provide menu options to add, display, issue, return, and search books.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Book 
{
    int id;
    char title[50];
    char author[50];
    int issued;
};

void addBook(struct Book books[], int *count);              // Function Declaration
void displayBooks(struct Book books[], int count);              // Function Declaration
void issueBook(struct Book books[], int count, int id);              // Function Declaration
void returnBook(struct Book books[], int count, int id);              // Function Declaration
void searchBook(struct Book books[], int count, int id);              // Function Declaration

int main() 
{
    struct Book books[100];          // Array of book records
    int count = 0;            // Number of books
    int choice, id;

    do 
    {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addBook(books, &count);                  // Calling function
                break;
            case 2:
                displayBooks(books, count);                  // Calling function
                break;
            case 3:
                printf("Enter book ID to issue: ");
                scanf("%d", &id);
                issueBook(books, count, id);                  // Calling function
                break;
            case 4:
                printf("Enter book ID to return: ");
                scanf("%d", &id);
                returnBook(books, count, id);                  // Calling function
                break;
            case 5:
                printf("Enter book ID to search: ");
                scanf("%d", &id);
                searchBook(books, count, id);                  // Calling function
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}

void addBook(struct Book books[], int *count)        // Function Definition
{
    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter title: ");
    scanf("%s", books[*count].title);
    printf("Enter author: ");
    scanf("%s", books[*count].author);
    books[*count].issued = 0;                // Initially available

    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book books[], int count)        // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No books found.\n");
        return;
    }
    printf("\n--- Book Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Title: %s, Author: %s, Status: %s\n", 
               books[i].id, books[i].title, books[i].author, 
               books[i].issued ? "Issued" : "Available");
    }
}

void issueBook(struct Book books[], int count, int id)        // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            if (books[i].issued == 0) 
            {
                books[i].issued = 1;
                printf("Book issued successfully!\n");
            } 
            else 
            {
                printf("Book is already issued.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No book found with ID %d.\n", id);
    }
}

void returnBook(struct Book books[], int count, int id)        // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            if (books[i].issued == 1) 
            {
                books[i].issued = 0;
                printf("Book returned successfully!\n");
            } 
            else 
            {
                printf("Book was not issued.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No book found with ID %d.\n", id);
    }
}

void searchBook(struct Book books[], int count, int id)        // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            printf("Book Found: ID: %d, Title: %s, Author: %s, Status: %s\n", 
                   books[i].id, books[i].title, books[i].author, 
                   books[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No book found with ID %d.\n", id);
    }
}