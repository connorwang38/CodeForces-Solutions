#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
string getString(char x)
{
    string s(1, x);
    return s;
}
 
int main() {
    string s, ans;
    cin >> s;
    bool good = true;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != toupper(s[i])) {
            good = false;
        }
    }
    if (good) {
        if (toupper(s[0]) == s[0]) {
            ans = tolower(s[0]);
        } else {
            ans = toupper(s[0]);
        }
        for (int i = 1; i < s.length(); i++) {
            ans += tolower(s[i]);
        }
        cout << ans << endl;
    } else {
        cout << s << endl;
    }
 
    return 0;
}