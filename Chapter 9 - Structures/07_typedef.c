// nice name is typedef or alias for datatype
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} stu;

int main()
{
    stu s1;
    s1.roll = 14;
    s1.cgpa = 8.5;
    strcpy(s1.name, "Ram");
    printf("student roll no:%d\n", s1.roll);
    return 0;
}