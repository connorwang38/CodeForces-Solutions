#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int a;
    cin >> a;
    if (a % 5 == 0) {
        cout << a / 5 << endl;
    } else {
        cout << a / 5 + 1<< endl;
    }
 
    return 0;
}