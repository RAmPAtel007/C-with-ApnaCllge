//memory allocation 
    #include<stdio.h>
    #include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *) malloc(5 * sizeof(int)); // 5 is the bytes
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=6;
    ptr[4]=10;

    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }


    // printf("%d\n", sizeof(int));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));
    return 0;
}