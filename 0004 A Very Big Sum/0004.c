#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int aVeryBigSum(int n, int ar_size, long int* ar) {
    // Complete this function
    long int ret = 0;
    
    for(int i = 0; i < n; i++){
        ret += ar[i];
    }
    
    return ret;
}

int main() {
    int n; 
    scanf("%i", &n);
    if(n < 1 || n > 10) return -1;
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
        if(ar[ar_i] < 0 || ar[ar_i] > 10000000000) return -1;
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}