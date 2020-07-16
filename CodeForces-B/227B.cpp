#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        array[num] = i + 1;
    }
    int m; cin >> m;
    ll v = 0, p = 0;
    for (int i = 0; i < m; i++) {
        int num; cin >> num;
        v += array[num];
        p += n - array[num] + 1;
    }
    cout << v << " " << p << "\n";
}