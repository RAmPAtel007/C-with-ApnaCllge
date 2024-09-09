// Write a function to calculate Percentage of a student from marks in science , Maths And Sanskrit
    #include<stdio.h>
    int calcpercentage(int Science, int math, int sanskrit);

int main(){
    int Science = 98;
    int math = 95;
    int sanskrit = 99;
    printf("percentage : %d",calcpercentage(Science, math, sanskrit) );
    
    return 0;
}
int calcpercentage(int Science, int math, int sanskrit){
return((Science+ math + sanskrit)/3);
}