#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
// Insert in BST
struct Node* insert(struct Node* root, int key) {
    if (root == NULL) return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}
// Search in BST
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) return root;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}
// Inorder Traversal
void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder Traversal of BST: ");
    inorder(root);
    printf("\n");

    int key = 40;
    struct Node* found = search(root, key);
    if (found != NULL)
        printf("Element %d found in BST.\n", key);
    else
        printf("Element %d not found in BST.\n", key);

    key = 90;
    found = search(root, key);
    if (found != NULL)
        printf("Element %d found in BST.\n", key);
    else
        printf("Element %d not found in BST.\n", key);

    return 0;
}
