#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int visited[MAX]; // for DFS & BFS
int queue[MAX], front = -1, rear = -1;
// Queue functions for BFS
void enqueue(int value) {
    queue[++rear] = value;
}

int dequeue() {
    return queue[front++];
}
// BFS using adjacency matrix
void BFS(int graph[MAX][MAX], int start, int n) {
    for (int i = 0; i < n; i++) visited[i] = 0;
    front = rear = -1;
    printf("BFS: ");
    visited[start] = 1;
    enqueue(start);
    front = 0; // initialize front after first enqueue
    while (front <= rear) {
        int node = dequeue();
        printf("%d ", node);
        for (int i = 0; i < n; i++) {
            if (graph[node][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}
// DFS using recursion
void DFS(int graph[MAX][MAX], int node, int n) {
    visited[node] = 1;
    printf("%d ", node);
    for (int i = 0; i < n; i++) {
        if (graph[node][i] && !visited[i])
            DFS(graph, i, n);
    }
}
int main() {
    int n = 6; // number of vertices
    int graph[MAX][MAX] = {
        {0,1,1,0,0,0},
        {1,0,0,1,1,0},
        {1,0,0,0,1,0},
        {0,1,0,0,0,1},
        {0,1,1,0,0,1},
        {0,0,0,1,1,0}
    };
    BFS(graph, 0, n);
    for (int i = 0; i < n; i++) visited[i] = 0;
    printf("DFS: ");
    DFS(graph, 0, n);
    printf("\n");

    return 0;
}
