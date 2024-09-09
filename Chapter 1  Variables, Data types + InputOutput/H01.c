#include<stdio.h>
int main(){ 
    float l;
    float b; 
    printf("enter the length : \n");
    scanf("%f", &l);
    
    printf("enter the breadth : \n");
    scanf("%f", &b);

    int A= l+b; 


    printf("the perimeter of the rectangle is %d", 2*A);

    return 0;
}
