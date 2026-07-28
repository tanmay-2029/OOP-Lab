#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int roll;
    char name[50];
    struct date dob;
};

int main(){

    struct student s;

    printf("enter roll - ");
    scanf("%d",&s.roll);

    printf("enter name - ");
    scanf("%s",s.name);

    printf("enter day month year - ");
    scanf("%d%d%d",&s.dob.day,&s.dob.month,&s.dob.year);

    printf("\n");
    printf("roll : %d\n",s.roll);
    printf("name : %s\n",s.name);
    printf("dob : %d/%d/%d\n",s.dob.day,s.dob.month,s.dob.year);

    return 0;
}