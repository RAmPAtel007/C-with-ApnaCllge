#include<stdio.h>

int main(){
    // int marks1 = 100;
    // int marks2 = 90;
    // int marks3 = 80;

    int marks[3];
    printf("Enter the marks of phys:");
    scanf("%d", &marks[0]);

    printf("Enter the marks of che:");
    scanf("%d", &marks[1]);

    printf("Enter the marks of maths:");
    scanf("%d", &marks[2]);

    printf("phys =%d, chem =%d, maths =%d", marks[0],marks[1],marks[2]);


    return 0;
}