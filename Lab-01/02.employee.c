#include <stdio.h>

struct employee{
    int ID;
    char name[100];
    int salary;
};

int main(){

    struct employee s;
    printf("Enter ID - ");
    scanf("%d",&s.ID);
    printf("Enter Name - ");
    scanf("%s",&s.name);
    printf("Enter Salary - ");
    scanf("%d",&s.salary);

    printf("Name-%s\nID-%d\nSalary-%d\n",s.name,s.ID,s.salary);

    return 0;
}