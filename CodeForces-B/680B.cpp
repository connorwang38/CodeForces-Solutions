#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a, n; cin >> n >> a;
    int array[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    if (array[a - 1] == 1) {
        count++;
    }
    int cur = 1;
    while (a - cur > 0 && a + cur <= n) {
        if (array[a - cur - 1] == 1 && array[a + cur - 1] == 1) {
            count += 2;
        }
        cur++;
    }
    if (a - cur <= 0) {
        while (a + cur <= n) {
            if (array[a + cur - 1] == 1) {
                count++;
            }
            cur++;
        }
    } else {
        while (a - cur > 0) {
            if (array[a - cur - 1] == 1) {
                count++;
            }
            cur++;
        }
    }
    cout << count << "\n";
}