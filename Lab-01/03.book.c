#include <stdio.h>

struct book{
    int ID;
    char title[100];
    char author[100];
    float price;
};

int main(){

    struct book b;

    printf("Enter Book ID- ");
    scanf("%d",&b.ID);
    printf("Enter Book Title- ");
    scanf("%s",&b.title);
    printf("Enter Author Name- ");
    scanf("%s",&b.author);
    printf("Enter Price - ");
    scanf("%f",&b.price);

    printf("Book ID     : %d\n", b.ID);
    printf("Book Title  : %s\n", b.title);
    printf("Author Name : %s\n", b.author);
    printf("Price       : %f\n", b.price);

    return 0;
}
