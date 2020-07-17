#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    vector <int> v2 = v;
    sort(v2.begin(), v2.end());
    int m; cin >> m;
    while (m--) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) {
            ll sum = 0;
            for (int i = l; i <= r; i ++) {
                sum += v[i - 1];
            }
            cout << sum << "\n";
        } else {
            ll sum = 0;
            for (int i = l; i <= r; i ++) {
                sum += v2[i - 1];
            }
            cout << sum << "\n";
        }
    }
}