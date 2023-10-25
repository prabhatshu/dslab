#include<stdio.h>
void main()
{
 int sum=0, s,n,i, a[100], miss;
 printf("enter the no. of elements");
 scanf("%d", &n);
 printf("enter the elements");
 for(i=0;i<n;i++){
 scanf("%d", &a[i]);
 }
 
 s=(n*(n+1))/2;
 for(i=0;i<n-1;i++){
 sum=sum+a[i];
 }
miss=sum-s;

 printf("the missing term is :%d", miss );


}