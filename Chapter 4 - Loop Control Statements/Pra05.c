//keep taking the number as input from the user until user enters an odd number
    #include<stdio.h>

int main(){
    int n;
    do {
        printf("enter the num :");
        scanf("%d", &n);
        printf("%d\n" , n);

        if(n%2!=0){
            break;
        }
    }
    while(1);
    printf("Thankyou");
    return 0;
}
// que - keep taking number as input from user until user enters a number which is multiple of 7 
// same as above code just change the given line below:-
// // if(n%7==0){ (//multiple of seven) 
//       break;
// }