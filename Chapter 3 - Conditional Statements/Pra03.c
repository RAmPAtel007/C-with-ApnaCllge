    #include<stdio.h>

int main(){
    char ch;
    printf("enter the character");
    scanf("%c", &ch);
    if(ch >= 'A' && ch<= 'Z'){
        printf("UPPER CASE");
    }
    else if (ch>= 'a'&& ch <='z'){
        printf("lower case");
    }
    else {
        printf("Not english letter");
    }
    return 0;
}