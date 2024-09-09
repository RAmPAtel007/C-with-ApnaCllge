    #include<stdio.h>

int main(){
    int num;
    printf("enter the num");
    scanf("%d",&num);

    if(num<1){
        printf("the given input is not natural num");
    }
    else{
        printf("the given num is not natural");
    }

    return 0;
}