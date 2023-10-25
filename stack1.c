#include <stdio.h>   
int stack[100],choice=0,i,n,top=-1;  
void push();  
void pop();  
void display();  
void main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
  
  

    while(choice != 3)  
    {  
        printf("Chose one from options\n");  
        printf("\n1.Push\n2.Pop\n3.Display");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice); 
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            
            default:  
            {  
                printf(" Enter valid choice ");  
            }   
        }
    }  
}   
  
void push ()  
{  
    int x;      
    if (top == n )   
    printf("Overflow");   
    else   
    {  
        printf("Enter the element to be inserted:");  
        scanf("%d",&x);         
        top = top +1;   
        stack[top] = x;   
    }   
}   
  
void pop ()   

{   
    int x;
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1; 
    x= stack[top];

}   
void display()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("empty stack");  
    }  
}
