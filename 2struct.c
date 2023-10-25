/*Write a program to store and print the roll no., name, age and marks of a student using structures. Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1*/
#include<stdio.h>
struct student {
    int roll, age;
    char name[30];
    float marks;

}s[5];

int main(){
    int i;
    for(i=0;i<5;i++){
        printf("enter the name of students :\n");
        scanf("%s", s[i].name);
        printf("enter the roll no. of students:\n");
        scanf("%d",&s[i].roll);
        printf("enter the age of students:\n");
        scanf("%d", &s[i].age);
        printf("enter the marks of students:\n");
        scanf("%f", &s[i].marks);

    }
    while(s[i].roll==1)
        printf("the name of %d is :%s", s[0].roll, s[0].name);
        printf("the age of roll no.1 is %d",s[0].age );
          printf("the marks of roll no.1 is %f",s[0].marks );
     
    return 0;
}








































































































































