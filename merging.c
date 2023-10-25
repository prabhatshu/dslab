#include<stdio.h>
void main(){
    int i, j,k, a[50], b[50],c[100] ,m,n;
    printf("enter the size of array A:");
    scanf("%d", &n);
     printf("enter the size of array B:");
    scanf("%d", &m);
    printf("enter the elements of array A");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
      printf("enter the elements of array B");
    for(j=0;j<m;j++){
        scanf("%d", &b[j]);
    }
    i=0, j=0, k=0;
  while(i<n&&j<m){
    if(a[i]<b[j]){
    c[k]=a[i];
    i++;
    k++;
    }
    else{
        c[k]=b[j];
        j++;
        k++;
    }
  }
  if(n<m){
    while(j<m){
        c[k]=b[j];
        j++;
         k++;
    }
  }
  else{
    while(i<n){
    c[k]=a[i];
    i++;
    k++;
    }
  }
for(k=0;k<=n+m;k++){
    printf("%d\n", c[k]);

}
}