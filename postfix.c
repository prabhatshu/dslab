#include <stdio.h>  
 int n;
int stack[100];  
int top = -1;  
void push(int x) {  
    if (top >=n - 1) {  
printf("Stack Overflow");  
        return;  
    }  
    top++;  
    stack[top] = x;  
}  
int pop() {  
    if (top < 0) {  
printf("Stack Underflow");  
        return -1;  
    }  
    int x = stack[top];  
    top=top-1;  
    return x;  
}  
int operator(char symbol) {  
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {  
        return 1;  
    }  
    return 0;  
}  
int evaluate(char* expression) {  
    int i = 0;  
    char symbol = expression[i];  
    int operand1, operand2, result;  
  
    while (symbol != '\0') {  
        if (symbol >= '0' && symbol <= '9') {  
            int num = symbol - '0';  
            push(num);  
        }  
        else if (operator(symbol)) {  
            operand2 = pop();  
            operand1 = pop();  
            switch(symbol) {  
                case '+': result = operand1 + operand2; break;  
                case '-': result = operand1 - operand2; break;  
                case '*': result = operand1 * operand2; break;  
                case '/': result = operand1 / operand2; break;  
            }  
            push(result);  
        }  
i++;  
        symbol = expression[i];  
    }  
    result = pop();  
    return result;  
}  
  
int main() {  
   
    printf("enter the value of n");
    scanf("%d", &n);
   
  expression=
    int result = evaluate(expression);  
printf("Result= %d\n", result);  
return 0;  
}  
