// precedence means priority i.e ; * , / , % 
// + , - 
// =
    #include<stdio.h>

int main(){
    int x = 4+9*10;
    int y = 4*3/6*2 ; 
    printf("%d\n", x);
    printf("%d", y); // associativity left to right 12/6 then 2*2 then 4 come 
    return 0;
}