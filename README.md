# Super-shop-Management-System


## **Project Description**

_The Super-shop Management System is a user-friendly, command-line application developed in C. This system simplifies inventory management, making it ideal for businesses like supermarkets and super-shops. It offers essential features, such as adding new products, displaying the inventory, editing product details, deleting items, and saving inventory to a file. The Super-shop Management System caters to small-scale inventory management, providing an intuitive way to monitor store or supermarket products._

## **Key Features**

  1. Add Product: Easily input new products into the super-shop inventory. You'll be prompted to provide product details, including the name, category, price, and quantity. Each product is assigned a unique ID.

  2. Display Inventory: Get a clear overview of your entire inventory. The system presents this information in a user-friendly table format, displaying product ID, name, category, price, and available quantity.

  3. Edit Product Details: Modify specific product information by providing its unique ID. You can update the name, category, price, and quantity with ease.

  4. Delete Product: Remove items from your inventory by specifying the product's ID. The system automatically adjusts the remaining products to maintain consistency.

  5. Save Inventory to File: Safeguard your inventory data by choosing the option to save it to a text file named "supershop_inventory.txt." This file can serve as a valuable backup or record-keeping tool.

  6. Exit: User can exit the program when they are done managing their inventory.

## **Environment Setup**

To run this project, follow these steps:

 1. Ensure you have a C compiler installed (e.g., GCC).

 2. Copy the provided C code into a file (e.g., supershop.c) on your local system.

 3. Open a terminal or command prompt and navigate to the directory where the supershop.c file is located.

 4. Compile the code using the following command:

       gcc supershop.c -o supershop on bash

 5. Run the compiled program:

.\supershop on bash

Interact with the program by following the menu prompts. You now have a user-friendly Supershop Management System running for your basic inventory management needs.

## **Logic of each function separately**

1. addProduct Function:
    
*   > This function allows the user to add a new product to the supershop's inventory.
*   > It starts by creating a new Product structure to represent the new product.
*   > The user is prompted to input the product's name, category, price, and quantity.
*   > A unique id is generated for the new product by incrementing the count variable.
*   > The new product is added to the supershop array at the index determined by the current count.
*   > Finally, the count is incremented to account for the newly added product.

2. displaySupershop Function:
  
*   > This function displays the current inventory of the supershop.
*   > It prints a table header that lists the attributes of each product: ID, Name, Category, Price, and Quantity.
*   > A for loop iterates through the supershop array and prints the details of each product in a formatted manner.

3. editProduct Function:

*   > This function allows the user to modify the details of an existing product based on its id.
*   > It begins by searching for the product in the supershop array by comparing the provided productID with the id of each product.
*   > If a product with a matching id is found, the function allows the user to update the product's name, category, price, and quantity.
*   > The product's details in the array are modified accordingly.
*   > A message is displayed to confirm that the product's details have been updated.

> Imam Cse:
4. deleteProduct Function:
  
*   > This function enables the user to delete a product from the inventory based on its id.
*   > It searches for the product with the provided productID in the supershop array.
*   > If the product is found, it is deleted by shifting the subsequent products in the array to fill the gap.
*   > The count variable is decremented to reflect the removal of the product.
*   > A message is displayed to confirm the deletion.

5. saveSupershopToFile Function:
  
*   > This function is responsible for saving the entire inventory to a text file named "supershop_inventory.txt."
*   > It opens the file in write mode ("w") and checks if the file was successfully opened.
*   > It then iterates through the super-shop array and writes the details of each product to the file, including its id, name, category, price, and quantity, in a specific format.
*   > Once all the products have been written to the file, it is closed.
*   > A success message is displayed to inform the user that the inventory data has been saved to the file.

6. Exit:

*   > Inside the main function, there is a while loop that runs indefinitely with the condition while(1). This loop is designed to keep the program running until the user chooses to exit.
*   > When the user chooses option (Exit), the following lines of code are executed:
 
case 6:
      return 0;

*   > The return 0; statement means that the program will exit, and control will be returned to the operating system with a status code of 0. As a result, the program exits, and the execution terminates.

##  Here are some screenshots after compiling and running this program:
![Screenshot 2023-10-19 225937](https://github.com/mehjabim/Super-shop-Management-System/assets/143678952/178eb8bd-0659-414f-922b-6d3ff764b0fe)
![Screenshot 2023-10-19 230354](https://github.com/mehjabim/Super-shop-Management-System/assets/143678952/583fbde0-a541-482b-b974-4c7023975522)




