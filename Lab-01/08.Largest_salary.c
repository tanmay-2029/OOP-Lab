#include <stdio.h>

struct employee{
    int id;
    char name[50];
    float salary;
};

int main(){

    struct employee e[5];
    int i, max = 0;

    for(i=0;i<5;i++){
        printf("enter employee %d details\n", i+1);

        printf("id - ");
        scanf("%d",&e[i].id);
        printf("name - ");
        scanf("%s",e[i].name);
        printf("salary - ");
        scanf("%f",&e[i].salary);
    }

    for(i=1;i<5;i++){
        if(e[i].salary > e[max].salary)
            max = i;
    }
    
    printf("\nid : %d\n",e[max].id);
    printf("name : %s\n",e[max].name);
    printf("salary : %.2f\n",e[max].salary);

    return 0;
}