    #include<stdio.h>
// check if a given chahracter is present in a string or not 
void checkChar(char str[], char ch );
int main(){
    char str[]="Apnacollage";
    char ch ='x';
    checkChar(str,ch);
    
    return 0;
}
void checkChar(char str[], char ch ){
    for( int i=0; str[i] != '\0'; i++){
        if(str[i]== ch){
            printf("character is present!");
            return;
        }
    }
    printf("character is NOt present!");
}