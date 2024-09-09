// write a function taht prints Namaste if user is indian ans Bonjour if the user is french.
    #include<stdio.h>
    void Namaste();
    void Bonjour();

int main(){
    char ch;
    printf("Enter f for french, Enter i for INDIA");
    scanf("%c", &ch);

    if(ch == 'i'){
        Namaste();
    } else{
        Bonjour();
    }

    return 0;
}
void Namaste(){
    printf("Namaste India\n");

}
void Bonjour(){
    printf("Bonjour\n");
}