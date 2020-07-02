#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int home [n];
    int away [n];
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (home[i] == away[j]) {
                count++;
            }
            if (home[j] == away[i]) {
                count++;
            }
        }
    }
    cout << count << "\n";
}
