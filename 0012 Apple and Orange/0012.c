#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_size, int* apples, int oranges_size, int* oranges) {
    // Complete this function
    int apples_count = 0;
    int oranges_count = 0;
    
    for (int i = 0; i < apples_size; i++){
        if (apples[i]+a <= t && apples[i]+a >= s){
            apples_count++;
        }
    }
    
    printf("%d\n", apples_count);
    
    for (int i = 0; i < oranges_size; i++){
        if (oranges[i]+b <= t && oranges[i]+b >= s){
            oranges_count++;
        }
    }
    
    printf("%d\n", oranges_count);
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    int *apple = malloc(sizeof(int) * m);
    for (int apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for (int orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
    }
    countApplesAndOranges(s, t, a, b, m, apple, n, orange);
    return 0;
}
