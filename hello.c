#include <stdio.h>
#include <string.h>


struct Product 

{
    int id;
    char name[100];
    char category[50];
    float price;
    int quantity;

};

void addProduct(struct Product supershop[], int *count) 
    
    {

    struct Product product;

    printf("Enter product name: ");
    scanf("%s", product.name);

    printf("Enter product category: ");
    scanf("%s", product.category);

    printf("Enter product price: ");
    scanf("%f", &product.price);

    printf("Enter product quantity: ");
    scanf("%d", &product.quantity);

    product.id = *count + 1;

    supershop[*count] = product;

    (*count)++;

}

void displaySupershop(struct Product supershop[], int count)

{
    printf("Supershop Management System\n");

    printf("ID\tName\tCategory\tPrice\tQuantity\n");

    for (int i = 0; i < count; i++) {

        printf("%d\t %s\t %s\t\t %.2f\t %d\n", supershop[i].id, supershop[i].name, supershop[i].category, supershop[i].price, supershop[i].quantity);
    
    }

}

void editProduct(struct Product supershop[], int count, int productID)

        {

    int index = -1;

    for (int i = 0; i < count; i++) 
    {
     if (supershop[i].id == productID)
        {
            index = i;
              break;
        }
    }

    if (index != -1)

    {
        printf("Edit Product Details for ID %d:\n", productID);

          printf("Enter product name: ");
         scanf("%s", supershop[index].name);

         printf("Enter product category: ");
        scanf("%s", supershop[index].category);

        printf("Enter product price: ");
        scanf("%f", &supershop[index].price);

        printf("Enter product quantity: ");
        scanf("%d", &supershop[index].quantity);

        printf("Product details updated for ID %d.\n",  productID);

}

    else
      {
 
        printf("Product with ID %d not found.\n", productID);

    }
}

void saveSupershopToFile(struct Product supershop[], int count)

  {
        FILE *file = fopen("supershop.txt", "a");

    if (file == NULL)

    {
        printf("Error opening file for writing.\n");
        
      }

    for (int i = 0; i < count; i++) 

         {
        fprintf(file, "%d %s %s %.2f %d\n", supershop[i].id, supershop[i].name, supershop[i].category, supershop[i].price, supershop[i].quantity);
      }

    fclose(file); 

}

int main() 

{ 

    struct Product supershop[100];
    int count = 0;
    int choice;
    int productID;
    int exitFlag = 0;

       while (!exitFlag)

    {
        printf("\nSupershop Management System\n");
        printf("1. Add Product\n");
        printf("2. Display Supershop\n");
        printf("3. Edit Product Details\n");
        printf("4. Save Supershop to File\n");
        printf("5. Exit\n"); 
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)

        {
            case 1:
                addProduct(supershop, &count);
                break;

            case 2:
                displaySupershop(supershop, count);
                  break;

            case 3:
                 printf("Enter the ID of the product to edit: ");

                scanf("%d", &productID);\

                editProduct(supershop, count, productID);
                break;

            case 4:
                saveSupershopToFile(supershop, count);

                 printf("Supershop data saved to 'supershop.txt'.\n");
                 
                break;

            case 5:
                 exitFlag = 1;
                break;

            default:
                printf("Invalid choice. Please try again.\n");

        }

    }

    return 0;
}
