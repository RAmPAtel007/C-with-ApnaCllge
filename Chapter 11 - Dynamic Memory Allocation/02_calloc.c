// continous allocation which intallize with zero 
 #include<stdio.h>
    #include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *) calloc(5 ,sizeof(int)); // 5 is the no of locations
    

    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
}