    #include<stdio.h>
    #include <string.h>  

int main(){
    //strlen()
    char name[]="ram";
    printf(" 1) length is :%d\n", strlen(name));

    // strcpy(newStr , oldStr)
     char oldstr[]="hello";
     char newstr[]="hy";
     strcpy(newstr,oldstr);
     puts(newstr);

     // strcat(firstStr,secStr)
     char firststr[100]="hello";// size of firststring should be greater because it should save both the string characters
     char secondstr[]="world";
     strcat(firststr,secondstr);
     puts(firststr);

     // strcmp(firstStr,secStr)
     char Firststr[]="banana";
     char Secondstr[]="Apple";
     printf("4) %d\n ", strcmp(Firststr, Secondstr) );

    
    return 0;
}