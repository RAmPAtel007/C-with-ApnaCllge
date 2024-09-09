#include<stdio.h>
#include<string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };
    
    int main(){
        struct student ece[100];
        ece[0].roll = 15;
        ece[0].cgpa = 7.2;
        strcpy(ece[0].name, "Rishabh");
        printf("Name = %s\n", ece[0].name );      
        
        return 0;
    }