#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int f, s;
    cin >> f >> s;
    if (7 - max(f, s) == 6) {
        cout << 1 << "/" << 1 << "\n";
    } else if (7 - max(f, s) == 4) {
        cout << 2 << "/" << 3 << "\n";
    } else if (7 - max(f, s) == 3) {
        cout << 1 << "/" << 2 << "\n";
    } else if (7 - max(f, s) == 2) {
        cout << 1 << "/" << 3 << "\n";
    } else {
        cout << 7 - max(f, s) << "/" << 6 << "\n";
    }
}
