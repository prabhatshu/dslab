#include<stdio.h>
struct student{
    int r;
    char name[60];
    float m;
}s[60];

void main(){
  for(int i=0; i<2; i++){
    printf("enter the details of students:");
    scanf("%d%f", &s[i].r,& s[i].m);
    fflush(stdin);
    gets(s[i].name);
  }
  printf("the details are");
  for(int i=0;i<2;i++){
    printf("%d%f", s[i].r, s[i].m );
  }
}