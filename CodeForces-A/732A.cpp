#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int f, s;
    cin >> f >> s;
    int cur = 1;
    int addend = f;
    while (f % 10 != 0 && (f - s) % 10 != 0) {
        f += addend;
        cur++;
    }
    cout << cur;
}
