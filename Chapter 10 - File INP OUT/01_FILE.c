#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NEWTest.txt","r"); // at the place of r if write w then w for write then automatically the file will generated if the is not exist if the file is exist then it will rewrite over it
    if(fptr == NULL){
        printf("file does'nt exist\n");
    } else{
        fclose(fptr);

    }
    
    return 0;
}