    #include<stdio.h>

int main(){
    int x = 5*2 - 2*3;
    int y = 5*2/2*3 ; 
    int z = 5*(2/2)*3 ; // bracket first 
    int xy = 5+2 / 2*3; // left to right 
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", xy);
    return 0;
}