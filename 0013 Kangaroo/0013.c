#include <stdio.h>
#include <stdlib.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    // Protect against mod by 0
    if (v1 == v2 || (x2 > x1 && v2 > v1))
        return "NO";
    else if ((x1 - x2) % (v1 - v2) == 0)
        return "YES";
    
    return "NO";
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
