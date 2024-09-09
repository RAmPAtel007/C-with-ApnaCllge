    #include<stdio.h>
// It means you have to define the variable before using it 
int main(){
    int a = 22;
    int b = a;
    int c = b*6;
    int d = 2 ,e ;

    int x,y,z; //we cannot use and declare simaltaneously means int x=y=z=1, not a vaild statement
    x=y=z=280;
    printf("the value of x y z is %d", x);



    return 0;
}