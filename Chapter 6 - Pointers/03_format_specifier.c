// here * means value at address
    #include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age; 

    //value
    printf("%d\n", age);
    printf("%d\n", *ptr); // pointer k aander jo bhi address hoga us address per jo bhi value hogi wooh print ho jayege
    printf("%d\n",*(&age)); //&age means address of age then * executes the value on that address
    return 0;
}