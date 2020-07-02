#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n, count = 0;
    cin >> n;
    while (n--) {
        int f, s;
        cin >> f >> s;
        if (s - f >= 2) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}