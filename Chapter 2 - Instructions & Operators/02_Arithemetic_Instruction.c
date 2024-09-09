    #include<stdio.h>
    #include<math.h>
// note that single variable is on the left side only


int main(){
     int a = 10 , b = 2 ;
     int sum = a + b;
     int multiply = a*b;

     int x , y= a*b ;  // here we assign the two new variable but the operation is only assigned to variable y 

     int power = pow(b,a);

     printf ("%d\n", power);

    printf("%d", 18%7); // modular % function is used to provide the remendier and not work on float values


    return 0; 
}