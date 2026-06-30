// Write a program to Create inventory management system. 

// Approach Used - Store product details (ID, name, quantity, price) in an array of structures, 
// and provide menu options to add, display, update, and search inventory records.
// Difficulty Level - Tough
// Concept Used - Use of structures, functions, loops, if-else conditions, and arrays

#include <stdio.h>
#include <string.h>

struct Product 
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addProduct(struct Product inventory[], int *count);       // Function Declaration
void displayInventory(struct Product inventory[], int count);       // Function Declaration
void updateProduct(struct Product inventory[], int count, int id);       // Function Declaration
void searchProduct(struct Product inventory[], int count, int id);       // Function Declaration

int main() 
{
    struct Product inventory[100];                    // Array of product records
    int count = 0;                   // Number of products
    int choice, id;

    do 
    {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Update Product\n");
        printf("4. Search Product by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                addProduct(inventory, &count);                           // Calling function
                break;
            case 2:
                displayInventory(inventory, count);                           // Calling function
                break;
            case 3:
                printf("Enter product ID to update: ");
                scanf("%d", &id);
                updateProduct(inventory, count, id);                           // Calling function
                break;
            case 4:
                printf("Enter product ID to search: ");
                scanf("%d", &id);
                searchProduct(inventory, count, id);                           // Calling function
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

void addProduct(struct Product inventory[], int *count)                  // Function Definition
{
    printf("Enter product ID: ");
    scanf("%d", &inventory[*count].id);
    printf("Enter product name: ");
    scanf("%s", inventory[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &inventory[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &inventory[*count].price);

    (*count)++;
    printf("Product added successfully!\n");
}

void displayInventory(struct Product inventory[], int count)                  // Function Definition
{
    int i;
    if (count == 0) 
    {
        printf("No products found.\n");
        return;
    }
    printf("\n--- Product Records ---\n");
    for (i = 0; i < count; i++) 
    {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

void updateProduct(struct Product inventory[], int count, int id)                  // Function Definition
{
    int i, found = 0;
    int newQuantity;
    float newPrice;

    for (i = 0; i < count; i++) 
    {
        if (inventory[i].id == id) 
        {
            printf("Enter new quantity for %s: ", inventory[i].name);
            scanf("%d", &newQuantity);
            printf("Enter new price for %s: ", inventory[i].name);
            scanf("%f", &newPrice);
            inventory[i].quantity = newQuantity;
            inventory[i].price = newPrice;
            printf("Product updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No product found with ID %d.\n", id);
    }
}

void searchProduct(struct Product inventory[], int count, int id)                  // Function Definition
{
    int i, found = 0;
    for (i = 0; i < count; i++) 
    {
        if (inventory[i].id == id) 
        {
            printf("Product Found: ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No product found with ID %d.\n", id);
    }
}
