#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int array[t];
    for (int i = 0; i < t; i++) {
        cin >> array[i];
    }
    int mi = abs(array[0] - array[1]);
    int ma = abs(array[0] - array[t - 1]);
    cout << mi << " " << ma << endl;
    for (int i = 1; i < t - 1; i++) {
        ma = max(abs(array[i] - array[0]), abs(array[i] - array[t - 1]));
        mi = min(abs(array[i] - array[i - 1]), abs(array[i] - array[i + 1]));
        cout << mi << " " << ma << endl;
    }
    ma = abs(array[t - 1] - array[0]);
    mi = abs(array[t - 2] - array[t - 1]);
    cout << mi << " " << ma << endl;
}