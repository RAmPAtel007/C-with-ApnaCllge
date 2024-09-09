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

        struct student *ptr = &s1;
        printf("student roll = %d\n",(*ptr).roll);
        // (*ptr) will fetch the whole s1

        // in place of dot operator we can use the arrow operator also 
        printf("student cgpa with -> operator = %f\n",ptr->cgpa);

    return 0;


    }