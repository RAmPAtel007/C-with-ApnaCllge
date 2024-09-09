    #include<stdio.h>
    #include<string.h>

// structure is user defined datatype
    struct student{
        int roll;
        float cgpa;
        char name[100];
    };

int main(){
    struct student s1;
    s1.roll = 14;
    s1.cgpa = 8.5;
    // s1.name ="Ram";this will not work because jo strings aaray notation se defined hi uski value change nahi kr skte hai = k sath but possible with pointer
    strcpy(s1.name, "Ram");
    printf("student roll no:%d\n", s1.roll);
    printf("student name :%s\n", s1.name);
    printf("student cgpa:%f\n", s1.cgpa);

   
    
    return 0;
}