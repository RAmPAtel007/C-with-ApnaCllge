// increase or decrease the memory using the same pointer and size
// allocate memory for 5 numbers. then dynamically increase it to 8 numbers
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("enter numbers (5) : ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8);
    printf("enter numbers (8) : ");
    for (int i = 0; i < 8; i++){
        scanf("%d", &ptr[i]);
    }
    // print
    for (int i = 0; i < 8; i++){
        printf("number %d is %d\n", i, ptr[i]);
    }
    return 0;
}

// que allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers 