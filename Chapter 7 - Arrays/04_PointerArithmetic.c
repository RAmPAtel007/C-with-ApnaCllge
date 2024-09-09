    #include<stdio.h>

int main(){
    int age =22;
    int _age = 33;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u,%udiffrence %u\n",ptr , _ptr, ptr-_ptr);
    _ptr = &age;
    // diff is 4 but it show 1 beacuse 1 int = 4 bytes
    //here diffrence is not number it is a diffrence of datatype
    printf("comparsion = %u\n", ptr == _ptr);
  //true 1 , if false then 0 
    return 0;
}