#include <stdio.h>

int removeElement(int arr[], int n, int key) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[count] = arr[i];  front
            count++;
        }
    }
    return count; 
}

int main() {
    int arr[] = {3, 2, 2, 3, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int newSize = removeElement(arr, n, key);

    printf("Array after removing key %d: \n", key);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
