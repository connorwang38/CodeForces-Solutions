#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int array[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        int compare[n] = { 0 };
        for (int i = 1; i < n; i++) {
            if (array[i] > array[i - 1]) {
                compare[i] = 1;
            } else if (array[i] < array[i - 1]) {
                compare[i] = -1;
            }
        }
        bool turn = false;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (!turn) {
                if (compare[i] > 0) {
                    turn = true;
                }
            } else {
                if (compare[i] < 0) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans;
        cout << "\n";
    }
}