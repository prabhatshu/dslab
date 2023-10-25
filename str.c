#include<stdio.h>
struct student{
    int r;
    char name[90], address;
    int age;
    float m;
}s[15];
void main(){
    int i;
    
    for (i=0;i<15;i++){
    printf("enter the details of atudent ");
    scanf("%d%s%s%d%f", &s[i].r, s[i].name, s[i].address, &s[i].age, &s[i].m);

    }
    printf("enteresd details are as:");
    for(i=0;i<15;i++){
        printf("%d%s%s%d%f", s[i].r, s[i].name, s[i].address, s[i].age, s[i].m);

    }
}

