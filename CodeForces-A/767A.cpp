#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, c; cin >> n; c = n;
    bool array [n]; fill(array, array + n, false);
    for (int i = 0; i < n; i++) {
        cin >> t;
        array[t - 1] = true;
        while (array[c - 1]) {
            cout << c << " ";
            c--;
        }
        cout << endl;
    }
}