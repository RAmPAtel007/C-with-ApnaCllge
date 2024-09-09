// write a function to calculate area of square, a circle and a rectangle 
#include<stdio.h>
    float squareA(float side);
    float circleA(float rad);
    float rectangleA(float a , float b);

    
    int main(){
        float a= 5.0 ;
        float b= 10.0;
        printf("area is : %f", rectangleA(a,b)); 
        
        return 0;
    }
 float squareA(float side){
    return side*side ;

}
float circleA(float rad){
    return 3.14*rad*rad;
}
float rectangleA(float a,float b){
    return a*b;
}