//Ask the user to enter thier  firstname and print it back to them 
// also try this with their fullname
    #include<stdio.h>

int main(){
    // char firstname[20];
    // printf("enter your first name :");
    // scanf("%s",firstname);
    // printf("your name is %s", firstname);
    // return 0;
    
    char fullName[10];
    printf("enter your first name:");
    scanf("%s", fullName); // scanf cannot do the multi word strings
    printf("your full name is : %s ", fullName);
    return 0;
}