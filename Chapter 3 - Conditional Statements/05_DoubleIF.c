    #include<stdio.h>
    //nested if 

int main(){
    int num;
    printf("enter age :");
    scanf("%d", &num);

    if(num>=0){
        printf("positive\n");

        if(num %2 ==0 ){
        printf("numb is even");
        }

        else{
            printf("num is odd");

        }



    } else {
        printf("negative");
    }
}