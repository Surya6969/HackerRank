#include <stdio.h>
#include <stdlib.h>

int* breakingRecords(int score_size, int* score, int *result_size) {
    // Complete this function
    int hi = score[0];
    int lo = score[0];
    static int ret[2];
    *result_size = 2;
    
    for (int i = 1; i < score_size; i++) {
        if (score[i] > hi) {
            hi = score[i];
            ret[0]++;
        } else if (score[i] < lo){
            lo = score[i];
            ret[1]++;
        }
    }
    return ret;
}

int main() {
    int n;
    scanf("%i", &n);
    int *score = malloc(sizeof(int) * n);
    for (int score_i = 0; score_i < n; score_i++) {
       scanf("%i",&score[score_i]);
    }
    int result_size;
    int* result = breakingRecords(n, score, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");

    return 0;
}
