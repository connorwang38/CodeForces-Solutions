#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    bool first = true;
    int minDist = -1;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (s.at(i) == 'R' && s.at(i + 1) == 'L') {
            if (first) {
                minDist = array[i + 1] - array[i];
                first = false;
            } else {
                minDist = min(minDist, array[i + 1] - array[i]);
            }
        }
    }
    if (minDist == -1) {
        cout << -1 << endl;
    } else { 
        cout << minDist / 2 << endl;
    }
}