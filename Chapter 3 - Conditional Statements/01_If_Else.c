    #include<stdio.h>

int main(){
    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if(age > 18) {
    printf("you are adult\n");
    printf("you can drive \n");
    printf("you can vote\n");
    
}
else{
    printf("you are not Eligible\n");
}
return 0;
}