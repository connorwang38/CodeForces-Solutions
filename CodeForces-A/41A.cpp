#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    bool test = true;
    if (s1.length() == s2.length()) {
        for (int i = 0; i < s1.length(); i++) {
            if (s1.at(i) != s2.at(s2.length() - i - 1)) {
                test = false;
            }
        }
    }
    
    if (test && s1.length() == s2.length()) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}