#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    unsigned long min = arr[0];
    unsigned long max = arr[0];
    unsigned long total = 0;
    
    for (int i = 0; i < arr_size; i++){
        total += arr[i];
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
    }
    
    printf("%lu %lu", total - max, total - min);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
        scanf("%i",&arr[arr_i]);
        if (arr[arr_i] < 1 || arr[arr_i] > 1000000000) return -1;
    }
    miniMaxSum(5, arr);
    return 0;
}