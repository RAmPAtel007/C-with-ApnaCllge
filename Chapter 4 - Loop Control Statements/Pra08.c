//printy the factorial of a number n.
    #include<stdio.h>

int main(){
    int n;
    printf("enter the num");
    scanf("%d",&n);

    int fac=1;
    for(int i=1;i<=n; i++){
        fac=fac*i; 
    }
    printf("final factorial is %d", fac);

return 0;
}