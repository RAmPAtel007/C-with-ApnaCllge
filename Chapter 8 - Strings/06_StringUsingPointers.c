    #include<stdio.h>

int main(){
    char *canchange = "hello world"; //pointer
    puts(canchange);
    canchange = "hello ";
    puts(canchange);

    char cannotchange[]="hello world"; //array
    puts(cannotchange);
    //cannotchange= "hello"; //give error
    return 0;
}