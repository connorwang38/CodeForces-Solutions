#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int array[n];
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        int cur = i + 1;
        int count = 1;
        while (cur < n && array[cur] <= array[cur - 1]) {
            count++;
            cur++;
        }
        cur = i - 1;
        while (cur >= 0 && array[cur] <= array[cur + 1]) {
            count++;
            cur--;
        }
        maxVal = max(maxVal, count);
    }
    cout << maxVal << "\n";
}