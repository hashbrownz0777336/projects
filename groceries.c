#include <stdio.h>

int main() {

    char foodItem[50];
    int quantity;
    float price, total;

    printf("pLeAsE eNtEr fOOd iTeM: \n");
    scanf("%s", &foodItem);

    printf("pLeAsE eNtEr qUaNtItY: \n");
    scanf("%d", &quantity);

    printf("pLeAsE eNtEr pRiCe: \n");
    scanf("%f", &price);

    total = quantity * price;
    printf("The total of %s is $%.2f\n", foodItem, total);

    FILE *fptr;
    fptr = fopen("list.txt", "a");

    // Error handling
    if (fptr == NULL) {
        printf("Error: Cound not open file.");
        return 1;
    }
    
    // Write items to the file
    fprintf(fptr, "%s\n", foodItem);
    fprintf(fptr, "%d\n", quantity);
    fprintf(fptr, "$%.2f\n", price);
    fprintf(fptr, "$%.2f\n", total);

    // Add all previous totals with the newly appended totals
    fprintf(fptr, "

    fclose(fptr);

    return 0;
}