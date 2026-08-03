#include <stdio.h>

struct product{
    int ID;
    char productName[100];
    float price;
    int quantity;
};

int main(){

    struct product p;

    printf("Enter Product ID - ");
    scanf("%d", &p.ID);
    printf("Enter Product Name - ");
    scanf("%s",&p.productName);
    printf("Enter Price - ");
    scanf("%f", &p.price);
    printf("Enter quantity - ");
    scanf("%d",&p.quantity);
    float f=p.quantity*p.price;
    printf("Cost : %f\n",f);

    return 0;
}
