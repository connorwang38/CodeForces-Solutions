#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    char array[4][4];
    bool test = false;
    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 4; j++) {
            array[i][j] = s[j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int pound = 0, dot = 0;
            if (array[i][j] == '#') {
                pound++;
            } else {
                dot++;
            }
            if (array[i + 1][j] == '#') {
                pound++;
            } else {
                dot++;
            }
            if (array[i + 1][j + 1] == '#') {
                pound++;
            } else {
                dot++;
            }
            if (array[i][j + 1] == '#') {
                pound++;
            } else {
                dot++;
            }
            if (max(dot, pound) >= 3) {
                test = true;
            }
        }
    }
    if (test) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}