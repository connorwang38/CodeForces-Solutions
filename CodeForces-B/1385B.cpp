#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int array[2 * n] = { 0 };
        vector <int> ans;
        for (int i = 0; i < 2 * n; i++) {
            bool test = true;
            int c; cin >> c;
            for (int j = 0; j < 2 * n; j++) {
                if (array[j] == c) {
                    test = false;
                }
            }
            array[i] = c;
            if (test) {
                ans.push_back(c);
            }
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}