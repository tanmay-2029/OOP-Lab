#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    int cm;
    int mm;
    int pm;
};

int main() {

    struct student s;
    int total;
    float average;

    printf("Enter Roll Number- ");
    scanf("%d", &s.rollno);

    printf("Enter Name- ");
    scanf("%s", &s.name);

    printf("Enter Marks in C- ");
    scanf("%d", &s.cm);

    printf("Enter Marks in Math- ");
    scanf("%d", &s.mm);

    printf("Enter Marks in Physics- ");
    scanf("%d", &s.pm);

    total = s.cm + s.mm + s.pm;
    average = total / 3.0;

    printf("\nRoll Number    : %d\n", s.rollno);
    printf("Name           : %s\n", s.name);
    printf("C Marks        : %d\n", s.cm);
    printf("Math Marks     : %d\n", s.mm);
    printf("Physics Marks  : %d\n", s.pm);
    printf("Total Marks    : %d\n", total);
    printf("Average        : %.2f\n", average);

    return 0;
}
