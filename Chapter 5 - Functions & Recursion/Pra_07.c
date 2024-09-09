// write a function to print n terms of the fibonacci sequence 
// i.e; 0 1 1 2 3 5 8 13 21.....
     #include<stdio.h>
     int fib(int n);
 
 int main(){
    printf("fib. of entered number is :%d" ,fib(6));
    return 0;
 }
 int fib (int n){
    // alredy known the base then define it 
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2 ;
    //printf("fibs is %d is:%d\n", n , fibN);
    return fibN;
 }
