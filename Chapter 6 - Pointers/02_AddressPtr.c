    #include<stdio.h>
    //%p is pointer address in hexadecimal 
//or %u in normal form

int main(){
    int age = 22;
    int *ptr = &age;// here * means value at address , & address of

    //address printing :-
    printf("%p\n", &age); // this o/p is in hexadecimal
    printf("%u\n", &age); //unsigned int

    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    return 0;
}