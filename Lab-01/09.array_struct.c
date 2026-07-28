#include <stdio.h>

struct student{
    int roll;
    char name[50];
    float cgpa;
};

int main(){

    struct student s[5];
    int i;

    for(i=0;i<5;i++){
        printf("enter student %d details\n",i+1);

        printf("roll - ");
        scanf("%d",&s[i].roll);

        printf("name - ");
        scanf("%s",s[i].name);

        printf("cgpa - ");
        scanf("%f",&s[i].cgpa);
    }
    
    for(i=0;i<5;i++){
        if(s[i].cgpa >= 8.0){
            printf("\nroll : %d\n",s[i].roll);
            printf("name : %s\n",s[i].name);
            printf("cgpa : %.2f\n",s[i].cgpa);
        }
    }

    return 0;
}