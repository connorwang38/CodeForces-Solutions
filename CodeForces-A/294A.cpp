#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int array [n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int s;
    cin >> s;
    while (s--) {
        int x, y;
        cin >> x >> y;
        x--;
        if (x - 1 < 0) {
            array[x + 1] += array[x] - y;
            array[x] = 0;
        } else if (x + 1 >= n) {
            array[x - 1] += y - 1;
            array[x] = 0;
        } else {
            array[x + 1] += array[x] - y;
            array[x - 1] += y - 1;
            array[x] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
}
