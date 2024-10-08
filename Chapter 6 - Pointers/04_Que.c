    #include<stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0; // means x= 0 

    printf("x =%d\n", x); // 0
    printf("*ptr=%d\n", *ptr); //0

    *ptr += 5; // *ptr=*ptr+5
    printf("x = %d\n", x);// 5
    printf("*ptr = %d\n", *ptr);// 5

    (*ptr)++; // means *ptr = *ptr +1 i.e; x = x + 1 = 5+1 = 6
    printf("x=%d\n",x);//6
    printf("*ptr = %d\n", *ptr);//6
    return 0;
}