#include <stdio.h>
// ---------- Linear Search ----------
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; // return index if found
    }
    return -1; // not found
}
// ---------- Binary Search ----------
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid; // found
        else if (arr[mid] < key)
            low = mid + 1; // search right half
        else
            high = mid - 1; // search left half
    }
    return -1; // not found
}
int main() {
    int arr[] = {11, 22, 25, 34, 64, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 34;

    // Linear Search
    int result1 = linearSearch(arr, n, key);
    if (result1 != -1)
        printf("Linear Search: Element %d found at index %d\n", key, result1);
    else
        printf("Linear Search: Element %d not found\n", key);

    // Binary Search
    int result2 = binarySearch(arr, n, key);
    if (result2 != -1)
        printf("Binary Search: Element %d found at index %d\n", key, result2);
    else
        printf("Binary Search: Element %d not found\n", key);
    return 0;
}
