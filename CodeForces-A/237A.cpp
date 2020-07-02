#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    int array[24][60];
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            array[i][j] = 0;
        }
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        array[a][b]++;
    }
    int maxVal = 0;
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            maxVal = max(maxVal, array[i][j]);
        }
    }
    cout << maxVal << endl;
}
