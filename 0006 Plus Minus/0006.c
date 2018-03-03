#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusMinus(int arr_size, int* arr) {
    // Complete this function
    float pos = 0;
    float neg = 0;
    float zero = 0;
    
    for (int i = 0; i < arr_size; i++) {
        pos += arr[i] > 0;
        neg += arr[i] < 0;
        zero += arr[i] == 0;
    }
    
    printf("%f\n", pos/arr_size);
    printf("%f\n", neg/arr_size);
    printf("%f\n", zero/arr_size);
}

int main() {
    int n; 
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    plusMinus(n, arr);
    return 0;
}