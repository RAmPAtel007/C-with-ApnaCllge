// Write 2 functiond - one to print "hello" and second to print "good bye".
    #include<stdio.h>
    void hello();
    void goodbye();

int main(){
    hello();
    goodbye();
    
    return 0;
}
void hello(){
    printf("Hello\n");
}
void goodbye(){
    printf("good bye :)\n");
}
