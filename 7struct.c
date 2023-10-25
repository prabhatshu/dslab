#include<stdio.h>
struct student {
  char name[90];
  float chem, phy, maths;
  float percentage[100];

    
}s[5];
void main(){
    int i;
      float percentage[100];
    for (i=0;i<5;i++){
    printf("enter the name of student\n");
    scanf ("%s", s[i].name );
    printf("enter the marks of physics\n");
    scanf("%f", &s[i].phy);
      printf("enter the marks of  chemistry\n");
    scanf("%f", &s[i].chem);
      printf("enter the marks of maths\n");
    scanf("%f", &s[i].maths);
    

    }
    for(i=0;i<5;i++){
        percentage[i]=(s[i].phy+s[i].chem+s[i].maths)/3.0;
    }
    for(i=0;i<5;i++){
      printf("percentage of %d student is %f", i+1, percentage[i]);
    }
}