#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, cur = 1, ans = 1;
    cin >> n;
    int array [n];
    cin >> array[0];
    for (int i = 1; i < n; i++) {
        cin >> array[i];
        if (array[i] >= array[i - 1]) {
            cur++;
        } else {
            cur = 1;
        }
        if (cur > ans) {
            ans = cur;
        }
    }
    cout << ans << "\n";
    return 0;
}