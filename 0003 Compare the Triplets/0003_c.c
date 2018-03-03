#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    int ali[] = {a0, a1, a2};
    int bob[] = {b0, b1, b2};
    
    static int ret[2] = {0};
    
    for(int i = 0; i < 3; i++){
        if(ali[i] < 1 || ali[i] > 100){
            *result_size = 0;
            return ret;
        } else if(bob[i] < 1 || bob[i] > 100){
            *result_size = 0;
            return ret;
        }
        ret[0] += (ali[i] > bob[i]) ? 1:0;
        ret[1] += (bob[i] > ali[i]) ? 1:0;
    }
    
    *result_size = 2;
    return ret;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    if(result_size == 0) return -1;
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    
    return 0;
}