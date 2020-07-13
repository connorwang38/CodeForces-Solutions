#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int first = -1, last;
        int array[n];
        int numWrong = 0;
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            if (array[i] != i + 1) {
                numWrong++;
                if (first == -1) {
                    first = i + 1;
                }
                last = i + 1;
            }
        }
        if (numWrong == 0) {
            cout << 0 << endl;
        } else if (numWrong == last - first + 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}