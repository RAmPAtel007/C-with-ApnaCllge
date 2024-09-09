#include<stdio.h>

int main(){
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if(age >= 18) {
    printf("you are adult\n");
    ;  
}
else if(age>13 && age<18){
    printf("you are teenager brooo!! , padhai kr jaa kr\n");
}
else{
    printf("you are child ");
}
return 0;
}