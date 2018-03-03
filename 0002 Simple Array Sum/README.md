# 0002 Simple Array Sum

Given an array of integers, find the sum of its elements.

## Input Format

The first line contains an integer, n, denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.

## Output Format

Print the sum of the array's elements as a single integer.

## Sample Input

6

1 2 3 4 10 11

## Sample Output

31

## Explanation

We print the sum of the array's elements: 1 + 2 + 3 + 4 + 10 + 11 = 31

## C

```c
#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(int n, vector <int> ar) {
  // Complete this function
}

int main() {
  int n;
  cin >> n;
  vector<int> ar(n);
  for(int ar_i = 0; ar_i < n; ar_i++){
    cin >> ar[ar_i];
  }
  int result = simpleArraySum(n, ar);
  cout << result << endl;
  return 0;
  }
}
```
