#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        if (a % 10 != 0) {
            a--;
        } else {
            a /= 10;
        }
    }
    cout << a;
    return 0;
}