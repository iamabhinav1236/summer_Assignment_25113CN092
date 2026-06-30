// Write a program to Create contact management system. 

// Approach Used - Store contact details (ID, name, phone number) in an array of structures, and provide menu options to add, display, and search contacts.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Contact 
{
    int id;
    char name[50];
    char phone[15];
};

void addContact(struct Contact contacts[], int *count);                   // Function Declaration
void displayContacts(struct Contact contacts[], int count);                   // Function Declaration
void searchContact(struct Contact contacts[], int count, int id);                   // Function Declaration

int main() 
{
    struct Contact contacts[100];                    // Array of contact records
    int count = 0;                  // Number of contacts
    int choice, id;

    do 
    {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addContact(contacts, &count);                      // Calling Function
                break;
            case 2:
                displayContacts(contacts, count);                      // Calling Function
                break;
            case 3:
                printf("Enter contact ID to search: ");
                scanf("%d", &id);
                searchContact(contacts, count, id);                      // Calling Function
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

void addContact(struct Contact contacts[], int *count)                    // Function Definition
{
    printf("Enter contact ID: ");
    scanf("%d", &contacts[*count].id);
    printf("Enter name: ");
    scanf("%s", contacts[*count].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*count].phone);

    (*count)++;
    printf("Contact added successfully!\n");
}

void displayContacts(struct Contact contacts[], int count)                    // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No contacts found.\n");
        return;
    }
    printf("\n--- Contact Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Name: %s, Phone: %s\n", contacts[i].id, contacts[i].name, contacts[i].phone);
    }
}

void searchContact(struct Contact contacts[], int count, int id)                    // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (contacts[i].id == id) 
        {
            printf("Contact Found: ID: %d, Name: %s, Phone: %s\n", contacts[i].id, contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No contact found with ID %d.\n", id);
    }
}
