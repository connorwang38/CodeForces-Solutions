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
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                count += 3;
                ans.push_back(i + 1);
                ans.push_back(1);
                ans.push_back(i + 1);
            }
        }
        cout << count << " ";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}