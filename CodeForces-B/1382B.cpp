#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int c; cin >> c;
        int count = 0;
        bool ans;
        bool test = false;
        for (int i = 0; i < c; i++) {
            int num; cin >> num;
            if (num == 1) {
                count += 1;
            } else if (test == false) {
                ans = count % 2;
                test = true;
            }
        }
        if (test) {
            if (!ans) {
                cout << "First" << "\n";
            } else {
                cout << "Second" << "\n";
            }
        } else {
            if (count % 2 == 1) {
                cout << "First" << "\n";
            } else {
                cout << "Second" << "\n";   
            }
        }
    }
}