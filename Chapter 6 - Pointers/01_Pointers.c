// int * ptr = &age; , or int _age=*ptr;
// here * means value at address
    #include<stdio.h>

int main(){
    int age =22;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);

    return 0;
}