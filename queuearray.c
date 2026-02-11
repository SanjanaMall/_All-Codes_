#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
// Enqueue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
    printf("Enqueued %d\n", value);
}
// Dequeue
void dequeue() {
    if (front == -1) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("Dequeued %d\n", queue[front]);
    if (front == rear)
        front = rear = -1;
    else
        front++;
}
// Peek
void peek() {
    if (front == -1)
        printf("Queue is empty!\n");
    else
        printf("Front element: %d\n", queue[front]);
}
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}
int main() {
    enqueue(80);
    enqueue(90);
    enqueue(100);
    enqueue(120);
    enqueue(130);
    display();
    peek();
    dequeue();
    display();
    return 0;
}
