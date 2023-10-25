#include<stdio.h>
int stack[100],n,top=-1,x,choice=0;
void push();
void pop();
void display();
void main(){
      
      display();
     
}
void push(){
    if(top>=n-1)
    printf("overflow");
    else

    top=top+1;
    stack[top]=x;
    display();
}
void pop(){
    if(top<n-1)
    printf("underflow");
    else
     top=top-1;
     stack[top]=x;

}
void decbin(int n){
    int x;
    while(x>0){
        x=n%2;
        push(x);
        display();
    }
}
void display()  
{   

int n,i;    

printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
stack[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is:");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",stack[i]);    
}    

}  
