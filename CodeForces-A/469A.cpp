#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    set <int> s;
    for (int i = 0; i < 2; i++) {
        int c; cin >> c;
        while (c--) {
            int num;
            cin >> num;
            s.insert(num);
        }
    }
    if (s.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
}