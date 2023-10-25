#include <stdio.h>
int n;
int stack[100];
int top = -1;

void push(int item) {
    if (top < n - 1) {
        stack[++top] = item;
    } else {
        printf("Stack overflow\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return -1; 
    }
}

void decimalToHexadecimal(int decimal) {
    char hexDigits[] = "0123456789ABCDEF";

    while (decimal > 0) {
        int remainder = decimal % 16;
        push(remainder);
        decimal = decimal / 16;
    }

    printf("Hexadecimal representation is: ");
    while (top >= 0) {
        int digit = pop();
        printf("%c", hexDigits[digit]);
    }

    printf("\n");
}
int main() {
    int decimal;
    printf("enter the number of elements in stack:");
    scanf("%d", &n);
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHexadecimal(decimal);

    return 0;
}


