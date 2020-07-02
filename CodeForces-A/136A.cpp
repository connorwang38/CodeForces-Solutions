#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int array [n];
    int ans [n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        ans[array[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}