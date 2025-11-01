#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    int n;
    
    printf("Enter number of products: ");
    scanf("%d", &n);
    
    struct Product products[n];
    
    // Read products
    printf("\nEnter product details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &products[i].id);
        printf("Name: ");
        getchar();
        gets(products[i].name);
        printf("Price: ");
        scanf("%f", &products[i].price);
    }
    
    // Search and update
    char searchName[50];
    printf("\nEnter product name to search: ");
    getchar();
    gets(searchName);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(products[i].name, searchName) == 0) {
            printf("\nProduct found:\n");
            printf("ID: %d\n", products[i].id);
            printf("Name: %s\n", products[i].name);
            printf("Current Price: %.2f\n", products[i].price);
            
            printf("\nEnter new price: ");
            scanf("%f", &products[i].price);
            
            printf("Price updated successfully!\n");
            printf("New Price: %.2f\n", products[i].price);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Product not found!\n");
    }
    
    return 0;
}

