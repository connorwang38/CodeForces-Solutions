#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> ans;
        string a, b; cin >> a >> b;
        int count = 0;
        int cur = a[0] - '0';
        int cur2 = a[a.length() - 1] - '0';
        int flips = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                flips++;
                if (cur != cur2) {
                    ans.push_back(i + 1);
                    count += 1;
                } else {
                    ans.push_back(1);
                    ans.push_back(i + 1);
                    count += 2;
                }
                if (flips % 2 == 1) {
                    cur = abs((a[i / 2] - '0') - 1);
                    cur2 = a[n - i / 2] - '0';
                } else {
                    cur = a[n - i / 2] - '0';
                    cur2 = abs((a[i / 2] - '0') - 1);
                }
            }
        }
        cout << count << " ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}