#include<stdio.h>
struct student{
    int r;
    char name[60];
    float m;
}s;
void main(){
    printf("enter the details of student:");
    scanf("%d%s%f", &s.r,s.name,& s.m );
    printf("%d%s%f", &s.r,s.name, s.m );
}