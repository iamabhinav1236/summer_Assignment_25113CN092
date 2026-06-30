// Write a program to Create ticket booking system. 

// Approach Used - Store ticket details (ID, passenger name, destination) in an array of structures, and provide menu options to book ticket, display tickets, and search tickets.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Ticket 
{
    int id;
    char name[50];
    char destination[50];
};

void bookTicket(struct Ticket tickets[], int *count);                    // Function Declaration
void displayTickets(struct Ticket tickets[], int count);                    // Function Declaration
void searchTicket(struct Ticket tickets[], int count, int id);                    // Function Declaration

int main() 
{
    struct Ticket tickets[100];                       // Array of ticket records
    int count = 0;                // Number of tickets
    int choice, id;

    do 
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                bookTicket(tickets, &count);                      // Calling Function
                break;
            case 2:
                displayTickets(tickets, count);                      // Calling Function
                break;
            case 3:
                printf("Enter ticket ID to search: ");
                scanf("%d", &id);
                searchTicket(tickets, count, id);                      // Calling Function
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

void bookTicket(struct Ticket tickets[], int *count)                    // Function Definition
{
    printf("Enter ticket ID: ");
    scanf("%d", &tickets[*count].id);
    printf("Enter passenger name: ");
    scanf("%s", tickets[*count].name);
    printf("Enter destination: ");
    scanf("%s", tickets[*count].destination);

    (*count)++;
    printf("Ticket booked successfully!\n");
}

void displayTickets(struct Ticket tickets[], int count)                    // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No tickets booked yet.\n");
        return;
    }
    printf("\n--- Ticket Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Name: %s, Destination: %s\n", tickets[i].id, tickets[i].name, tickets[i].destination);
    }
}

void searchTicket(struct Ticket tickets[], int count, int id)                    // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (tickets[i].id == id) 
        {
            printf("Ticket Found: ID: %d, Name: %s, Destination: %s\n", tickets[i].id, tickets[i].name, tickets[i].destination);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No ticket found with ID %d.\n", id);
    }
}
