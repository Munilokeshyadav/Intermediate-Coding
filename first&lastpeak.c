#include <stdio.h> 
void find_peak_elements(int arr[], int n, int *first_peak, int *last_peak) { 
*first_peak = -1; 
*last_peak = -1; 
 
 if (n == 1) { 
 *first_peak = *last_peak = arr[0]; 
 return; 
 } 
 
 if (arr[0] > arr[1]) { 
 *first_peak = arr[0]; 
 } 
 
 for (int i = 1; i < n - 1; i++) { 
 if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) { 
 if (*first_peak == -1) { 
 *first_peak = arr[i]; 
 } 
 *last_peak = arr[i]; 
 } 
 } 
 
 if (arr[n - 1] > arr[n - 2]) { 
 if (*first_peak == -1) { 
 *first_peak = arr[n - 1]; 
 } 
 *last_peak = arr[n - 1]; 
 } 
} 
int main() { 
 int arr[] = {1, 3, 20, 4, 1, 0, 15, 2, 10}; 
 int n = sizeof(arr) / sizeof(arr[0]); 
 int first_peak, last_peak; 
 
 find_peak_elements(arr, n, &first_peak, &last_peak); 
 
 if (first_peak != -1) 
 printf("First Peak: %d\n", first_peak); 
 else 
 printf("No peak found\n"); 
 
 if (last_peak != -1) 
 printf("Last Peak: %d\n", last_peak); 
 
 return 0; 
}