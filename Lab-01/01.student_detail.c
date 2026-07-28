#include <stdio.h>

struct student{
    int rollnum;
    char name[100];
    int age;
    float cgpa;
};

int main(){

    struct student s;
    printf("Enter RollNo. - ");
    scanf("%d",&s.rollnum);
    printf("Enter Name - ");
    scanf("%s",&s.name);
    printf("Enter Age - ");
    scanf("%d",&s.age);
    printf("Enter CGPA - ");
    scanf("%f",&s.cgpa);

    printf("Name-%s\nRollno.-%d\nAge-%d\nCGPA-%f\n",s.name,s.rollnum,s.age,s.cgpa);

    return 0;
}