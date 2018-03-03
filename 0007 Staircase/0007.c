#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

// The most ghetto solution at 3:56 AM
// but it passed all 9 test cases so ¯\_(ツ)_/¯
void staircase(int n, int up) {
    // Complete this function
    int down = n;
    while(down > 0 && up != 0){
        printf(" ");
        down--;
    }
    
    for(int i = 0; i < up; i++){
        printf("#");
    }

    if(n != 0){
        if(up != 0) printf("\n");
        staircase(n-1, up+1);
    }
}

int main() {
    int n; 
    scanf("%i", &n);
    staircase(n, 0);
    return 0;
}
