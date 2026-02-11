#include <stdio.h>
#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];
// Initialize hash table
void initHashTable() {
    for(int i=0;i<TABLE_SIZE;i++)
        hashTable[i] = -1;  // -1 means empty
}
// Hash function
int hash(int key) {
    return key % TABLE_SIZE;
}
// Insert key into hash table
void insert(int key) {
    int index = hash(key);
    int startIndex = index;

    while(hashTable[index] != -1) {
        index = (index + 1) % TABLE_SIZE;
        if(index == startIndex) {
            printf("Hash Table Overflow!\n");
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d\n", key);
}
// Search key in hash table
void search(int key) {
    int index = hash(key);
    int startIndex = index;

    while(hashTable[index] != -1) {
        if(hashTable[index] == key) {
            printf("Key %d found at index %d\n", key, index);
            return;
        }
        index = (index + 1) % TABLE_SIZE;
        if(index == startIndex) break;
    }
    printf("Key %d not found\n", key);
}
// Display hash table
void display() {
    printf("Hash Table: \n");
    for(int i=0;i<TABLE_SIZE;i++)
        printf("Index %d : %d\n", i, hashTable[i]);
}
int main() {
    initHashTable();

    insert(10);
    insert(20);
    insert(30);
    insert(25);
    insert(35);

    display();

    search(25);
    search(40);

    return 0;
}
