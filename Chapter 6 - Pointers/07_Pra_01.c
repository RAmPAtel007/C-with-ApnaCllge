// swap 2 numbers and b 
    #include<stdio.h>
    void _swap(int *a,int *b);

int main(){
    int x=3, y=5;
    _swap(&x, &y);
    printf("x=%d & y =%d\n", x,y);
    return 0;
}
//call by refrence 
void _swap(int *a , int *b){
    int t = *a;
    *a=*b;
    *b=t;
}