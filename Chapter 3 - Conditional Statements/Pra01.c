// write a program a student is pass or fail
    #include<stdio.h>

int main(){
    int marks;
    printf("enter the marks(0-100)\n");
    scanf("%d",&marks);

    if(marks>=30){
        printf("PASS");
    }
    else {
        printf("F ho gya bhaiya");
    }
    // marks >= 30 ? printf("PASS\n") : printf("Fail\n");

    return 0;
}