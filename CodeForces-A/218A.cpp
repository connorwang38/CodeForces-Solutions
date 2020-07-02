#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    int prev, cur, next; cin >> prev;
    for (int i = 1; i < 2 * n + 1; i += 2) {
        cin >> cur >> next;
        cout << prev << " ";
        if (cur - next > 1 && cur - prev > 1 && m > 0) {
            cout << cur - 1 << " ";
            m--;
        } else {
            cout << cur << " ";
        }
        prev = next;
    }
    cout << next << endl;
}