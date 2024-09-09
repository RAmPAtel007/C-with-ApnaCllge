    #include<stdio.h>
// write a functiom named slice, which takes a string and returns a sliced string from index n to m 
void slice(char str[], int n , int m);
int main(){
    char str[]= "helloWorld";
    slice(str, 3,6);
    
    return 0;
}
void slice(char str[], int n , int m){// m and n are  valid values
      char newstr[100];
      int  j=0;
      for (int i =n; i<=m; i++, j++){
        newstr[j] = str[i];
    
      }
      newstr[j] ='\0';
      puts(newstr);


}
// Pra 11 :- write a function to count the occurrence of vowels in a string 