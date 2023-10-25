#include<stdio.h>
int fib(int n){
    if(n==1||n==2)
    return n-1;
    else 
    return fib(n-1)+fib(n-2);

}
void main(){
    int n,i;
    printf("enter the number of terms");
    scanf("%d", &n);
    fib(n);
    for(i=1; i<n;i++)
    printf("%d\n", fib(i));
}