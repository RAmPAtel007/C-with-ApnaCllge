    #include<stdio.h>
    int sum(int a , int b);
    void PrintTable(int n); // here n works diffrently and into the main function n variable works diffrently


int main(){
    int n;
    printf("enter number :");
    scanf("%d\n", &n);

    PrintTable(n); // calling m variable ko argument / actual parameter bolte hai 

    
    return 0;
}
int sum(int x, int y){
    return x + y; 
}
void PrintTable(int n){ //parameter / formal parameter 
    for(int i=1; i<=10; i++){
        printf("%d\n" , i*n);

    }

}