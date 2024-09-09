// Factorial of n 
     #include<stdio.h>

int fac(int n );
int main(){
    printf("factorial is : %d", fac(5));
    
    return 0;
}
// recursive function
int fac(int n){
    if(n == 0){
        return 1;
    }
    int FacNm1 = fac(n-1); //NM1 is N minus 1 
    int facN = fac(n-1)*n;
    return facN;
}