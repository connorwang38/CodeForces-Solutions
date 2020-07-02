#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n, a = 0, d = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == 'A') {
            a++;
        } else if (s.at(i) == 'D') {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton" << "\n";
    } else if (d > a) {
        cout << "Danik" << "\n";
    } else {
        cout << "Friendship" << "\n";
    }
    return 0;
}