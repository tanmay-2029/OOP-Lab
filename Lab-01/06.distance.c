#include <stdio.h>

struct distance{
    int feet;
    int inches;
};

int main(){

    struct distance d1, d2;

    printf("Enter 1st Distance\n");
    printf("Feet - ");
    scanf("%d", &d1.feet);
    printf("Inches - ");
    scanf("%d", &d1.inches);

    printf("\nEnter 2nd Distance\n");
    printf("Feet - ");
    scanf("%d", &d2.feet);
    printf("Inches - ");
    scanf("%d", &d2.inches);

    int tf=d1.feet+d2.feet;
    int ti=d1.inches+d2.inches;
    
    printf("\nFinal Distance\n");
    printf("Feet   : %d\n", tf);
    printf("Inches : %d\n", ti);

    return 0;
}