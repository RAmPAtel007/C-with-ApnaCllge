    #include<stdio.h>
// && And operator 
// || Or operator
// ! Not operator 

int main(){
    printf("And operator %d\n", 4>3 && 5>2 );
    printf("And operator %d\n", 4>3 && 5<2 );

    printf("Or Operator %d\n", 4>3 || 5<2 );
    printf("Or Operator %d\n", 4<3 || 5<2 );

    printf("Not Operator %d\n", !4<3  );
    printf("Not Operator %d\n", !4>3  );
    printf("Not operator %d\n", !(4>3 && 1>2));




    
    return 0;
}