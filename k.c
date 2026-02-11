#include <stdio.h>
#include <stdlib.h>
#define V 5
#define E 7
struct Edge {
    int u, v, w;
};
struct Edge edges[E] = {
    {0,1,2}, {0,3,6}, {1,2,3}, {1,3,8}, {1,4,5}, {2,4,7}, {3,4,9}
};
// Disjoint Set Functions
int parent[V];
int find(int i) {
    if (parent[i] == i) return i;
    return parent[i] = find(parent[i]);
}
void unionSet(int x, int y) {
    int xset = find(x);
    int yset = find(y);
    parent[yset] = xset;
}
// Comparator for qsort
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->w - ((struct Edge*)b)->w;
}
void kruskalMST() {
    for (int i = 0; i < V; i++) parent[i] = i;
    qsort(edges, E, sizeof(edges[0]), compare);
    printf("Edge \tWeight\n");
    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int set_u = find(u);
        int set_v = find(v);
        if (set_u != set_v) {
            printf("%d - %d \t%d\n", u, v, edges[i].w);
            unionSet(set_u, set_v);
        }
    }
}
int main() {
    kruskalMST();
    return 0;
}
