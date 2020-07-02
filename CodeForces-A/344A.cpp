#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, cur, last, count = 1;
    cin >> t;
    cin >> last;
    for (int i = 1; i < t; i++) {
        cin >> cur;
        if (cur != last) {
            count++;
        }
        last = cur;
    }
    cout << count << endl;
}
