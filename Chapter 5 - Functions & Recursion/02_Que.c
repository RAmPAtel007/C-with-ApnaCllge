    #include<stdio.h>
    int sum(int a, int b);

int main(){
     int a,b ;
     printf("enter first number:");
     scanf("%d", &a);
     printf("enter second number:");
     scanf("%d", &b);

     int s= sum(a,b);
     printf("sum is : %d\n", s);
         return 0;
}
int sum(int x, int y){ // jo bhi value first input enter hoge (a) wooh x m save hoge then another value in y (as b)
    return x+y;
}

