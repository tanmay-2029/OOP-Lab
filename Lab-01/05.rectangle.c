#include <stdio.h>

struct rectangle{
    float length;
    float breadth;
};

int main(){

    struct rectangle r;
    float area, perimeter;

    printf("Enter Length - ");
    scanf("%f",&r.length);
    printf("Enter Breadth - ");
    scanf("%f",&r.breadth);

    area =r.length*r.breadth;
    perimeter = 2*(r.length+r.breadth);
    
    printf("Area      : %f\n", area);
    printf("Perimeter : %f\n", perimeter);

    return 0;
}