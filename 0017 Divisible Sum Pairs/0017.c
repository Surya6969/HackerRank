#include <stdio.h>
#include <stdlib.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) {
    // Complete this function
    int pairs = 0;
    for (int i = 0; i < ar_size; i++) {
        for (int j = 0; j < ar_size; j++) {
            if (i < j && (ar[i] + ar[j]) % k == 0){
                pairs++;
            }
        }
    }
    return pairs;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    if (n > 100 || n < 2 || k > 100 || k < 1) return -1;
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        scanf("%i",&ar[ar_i]);
        if (ar[ar_i] > 100 || ar[ar_i] < 1) return -1;
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}
