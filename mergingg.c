#include<stdio.h>
void main(){
    int i,j,m,n,a[100], b[100], c[100],k;
      printf("enter the number of elements of Set A:");
      scanf("%d",&m);
       printf("enter the number of elements of Set B:");
      scanf("%d",&n);
      printf("enter the elements of Set A");
      for(i=0;i<m;i++){
        scanf("%d",&a[i]);
      }
      printf("enter the elements of set B");
      for(j=0;j<n;j++){
        scanf("%d", &b[j]);
      }
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        if(a[i]<b[j]){
      c[k]=a[i];
            i++;
            k++;
        }
        else {
            c[k]=b[j];
            j++;
            k++;
        }
      }
      }
      if(m<n){
    while(j<n){
        c[k]=b[j];
        j++;
         k++;
    }
  }
  else{
    while(i<m){
    c[k]=a[i];
    i++;
    k++;
    }
  }
      
      for(k=0;k<m+n;k++){
      printf("the sorted merged array is:%d", c[k]);
}
}