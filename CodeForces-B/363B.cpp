#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k; cin >> n >> k;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += array[i];
    }
    int minVal = sum;
    int minIndex = 0;
    for (int i = 1; i < n - k + 1; i++) {
        sum += array[i + k - 1] - array[i - 1];
        if (minVal > sum) {
            minVal = sum;
            minIndex = i;
        }
    }
    cout << minIndex + 1 << "\n";
}