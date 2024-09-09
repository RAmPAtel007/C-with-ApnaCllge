    #include<stdio.h>
// ptp is a variable that stores the  memory address of another pointer
int main(){
    int i = 100;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);

     // use * for value 
     //use & for the address 
     
    return 0;
}