#include <stdio.h> 
void swap(int *a, int *b) { 
 int temp = *a; 
 *a = *b; 
 *b = temp; 
} 
int partition(int arr[], int low, int high) { 
 int pivot = arr[high]; 
 int i = low - 1; 
 for (int j = low; j < high; j++) { 
 if (arr[j] < pivot) { 
 i++; 
 swap(&arr[i], &arr[j]); 
 } 
 } 
 swap(&arr[i + 1], &arr[high]); 
 return i + 1; 
} 
void quick_sort(int arr[], int low, int high) { 
 if (low < high) { 
 int pi = partition(arr, low, high); 
 quick_sort(arr, low, pi - 1); 
 quick_sort(arr, pi + 1, high); 
 } 
} 
void merge(int arr[], int left, int mid, int right) { 
 int n1 = mid - left + 1; 
 int n2 = right - mid; 
 int L[n1], R[n2]; 
 
 for (int i = 0; i < n1; i++) 
 L[i] = arr[left + i]; 
 for (int j = 0; j < n2; j++) 
 R[j] = arr[mid + 1 + j]; 
 
 int i = 0, j = 0, k = left; 
 while (i < n1 && j < n2) { 
 if (L[i] <= R[j]) { 
 arr[k] = L[i]; 
 i++; 
 } else { 
 arr[k] = R[j]; 
 j++; 
 } 
 k++; 
 } 
 while (i < n1) { 
 arr[k] = L[i]; 
 i++; 
 k++; 
 } 
 while (j < n2) { 
 arr[k] = R[j]; 
 j++; 
 k++; 
 } 
} 
void merge_sort(int arr[], int left, int right) { 
 if (left < right) { 
 int mid = left + (right - left) / 2; 
 merge_sort(arr, left, mid); 
 merge_sort(arr, mid + 1, right); 
 merge(arr, left, mid, right); 
 } 
} 
void print_array(int arr[], int size) { 
 for (int i = 0; i < size; i++) 
 printf("%d ", arr[i]); 
 printf("\n"); 
} 
int main() { 
 int data[] = {3, 6, 8, 10, 1, 2, 1}; 
 int size = sizeof(data) / sizeof(data[0]); 
 
 int quick_data[size]; 
 for (int i = 0; i < size; i++) 
 quick_data[i] = data[i]; 
 quick_sort(quick_data, 0, size - 1); 
 printf("Quick Sort: "); 
 print_array(quick_data, size); 
int merge_data[size]; 
for (int i = 0; i < size; i++) 
merge_data[i] = data[i]; 
merge_sort(merge_data, 0, size - 1); 
printf("Merge Sort: "); 
print_array(merge_data, size); 
return 0; 
}