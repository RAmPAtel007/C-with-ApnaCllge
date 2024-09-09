    #include<stdio.h>

int main(){
    // 2*3 i.e; 2 students 3 subjects 
    int marks[2][3];//_ _ _ | _ _ _
    marks[0][0] = 85; 
    marks[0][1] = 95;
    marks[0][2] = 97;  

    marks[1][0] = 95; 
    marks[1][1] = 75;
    marks[1][2] = 87;  
    printf("%d", marks[0][0]);

    return 0 ;
}