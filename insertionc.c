#include<stdio.h>
void main(){
    int a[100],i,j,n, pos, key;
    printf("enter the no. of elements in an array:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++){
    scanf("%d", &a[i]);
    }
printf("enter the element to be inserted:");
scanf("%d", &key);
for(i=0;i<n;i++){
    if(a[i]<key){
        i++;
        }
        else{
            
        }
}
}