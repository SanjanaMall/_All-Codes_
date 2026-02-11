#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued %d\n", value);
}

// Dequeue
void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow!\n");
        return;
    }
    struct Node* temp = front;
    printf("Dequeued %d\n", front->data);
    front = front->next;

    if (front == NULL) rear = NULL;
    free(temp);
}

// Peek
void peek() {
    if (front == NULL)
        printf("Queue is empty!\n");
    else
        printf("Front element: %d\n", front->data);
}

// Display
void display() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main
int main() {
    enqueue(54);
    enqueue(34);
    enqueue(85);
    enqueue(67);
    enqueue(96);
    display();
    peek();
    dequeue();
    display();
    return 0;
}

