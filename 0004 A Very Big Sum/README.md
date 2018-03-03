# 0004 [A Very Big Sum](https://www.hackerrank.com/challenges/a-very-big-sum/problem)

![Problem](zproblem.png)

## C

```c
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int aVeryBigSum(int n, int ar_size, long int* ar) {
    // Complete this function
}

int main() {
    int n;
    scanf("%i", &n);
    long int *ar = malloc(sizeof(long int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%li",&ar[ar_i]);
    }
    long int result = aVeryBigSum(n, n, ar);
    printf("%ld\n", result);
    return 0;
}
```

## C++

```cpp
#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
```