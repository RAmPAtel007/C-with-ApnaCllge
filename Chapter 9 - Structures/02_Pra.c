#include<stdio.h>
    #include<string.h>

// program to write 3 students details
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

int main(){
    struct student s1;
    s1.roll = 14;
    s1.cgpa = 8.5;
    strcpy(s1.name, "Ram");
    printf("student roll no:%d\n", s1.roll);
    printf("student name :%s\n", s1.name);
    printf("student cgpa:%f\n\n", s1.cgpa);

    struct student s2;
    s2.roll = 32;
    s2.cgpa = 7.5;
    strcpy(s2.name, "Sam");
    printf("student roll no:%d\n", s2.roll);
    printf("student name :%s\n", s2.name);
    printf("student cgpa:%f\n", s2.cgpa);
    
    struct student s3;
    s3.roll = 54;
    s3.cgpa = 7.2;
    strcpy(s3.name, "Shubh");
    printf("student roll no:%d\n", s3.roll);
    printf("student name :%s\n", s3.name);
    printf("student cgpa:%f\n\n", s3.cgpa);

   
    
    return 0;
}