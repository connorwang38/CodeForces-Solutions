#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    char array[n][n];
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < n; j++) {
            array[i][j] = s.at(j);
        }
    }
    bool test = true;
    char f = array[0][0], s = array[0][1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (array[i][j] != f) {
                    test = false;
                }
            } else {
                if (array[i][j] != s) {
                    test = false;
                }
            }
        }
    }
    if (test && f != s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}