#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;
// Push
void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else {
        stack[++top] = value;
        printf("Pushed %d\n", value);
    }
}
// Pop
void pop() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else
        printf("Popped %d\n", stack[top--]);
}
//peek
void peek() {
    if (top == -1)
        printf("Stack is empty!\n");
    else
        printf("Top element: %d\n", stack[top]);
}
void display() {
    if (top == -1)
        printf("Stack is empty!\n");
    else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();

    return 0;
}
