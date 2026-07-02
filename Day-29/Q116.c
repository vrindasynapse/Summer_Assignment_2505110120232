#include<stdio.h>

int main()
{
    int id,qty;
    float price;
    char item[50];

    printf("Enter Item ID: ");
    scanf("%d",&id);

    printf("Enter Item Name: ");
    scanf("%s",item);

    printf("Enter Quantity: ");
    scanf("%d",&qty);

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("\n----- Inventory -----\n");
    printf("Item ID   : %d\n",id);
    printf("Item Name : %s\n",item);
    printf("Quantity  : %d\n",qty);
    printf("Price     : %.2f\n",price);

    return 0;
}    