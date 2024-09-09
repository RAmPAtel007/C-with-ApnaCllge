    #include<stdio.h>
// Calculate the sum of all numbers betn 5 to 50 . 
int main(){
    int sum=0;

    for(int i=5; i <=50 ; i++){
        sum=sum+i;
    }
    printf("sum is %d", sum );
    return 0;
}