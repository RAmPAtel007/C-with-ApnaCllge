#include<stdio.h>
#include<string.h>

    struct student{
        int roll;
        float cgpa;
        char name[100];
    };
    
    int main(){
        struct student s1={14,9.9,"RAM"};
        printf("Student Name = %s\n", s1.name);

    return 0;


    }
    