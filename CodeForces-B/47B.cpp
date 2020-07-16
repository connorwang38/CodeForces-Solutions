#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int array[6] = { 0 };
    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        if (s == "A>B" || s == "B<A") {
            array[0] = 1;
        } else if (s == "B>A" || s == "A<B") {
            array[1] = 1;
        } else if (s == "B>C" || s == "C<B") {
            array[2] = 1;
        } else if (s == "C>B" || s == "B<C") {
            array[3] = 1;
        } else if (s == "C>A" || s == "A<C") {
            array[4] = 1;
        } else if (s == "A>C" || s == "C<A") {
            array[5] = 1;
        }
    }
    string ans;
    if (array[0] == 1 && array[2] == 1 && array[5] == 1 && array[1] == 0 && array[3] == 0 && array[4] == 0) {
        ans = "CBA";
    } else if (array[1] == 1 && array[2] == 1 && array[5] == 1 && array[0] == 0 && array[3] == 0 && array[4] == 0) {
        ans = "CAB";
    } else if (array[1] == 1 && array[3] == 1 && array[4] == 1 && array[0] == 0 && array[2] == 0 && array[5] == 0) {
        ans = "ABC";     
    } else if (array[1] == 1 && array[2] == 1 && array[4] == 1 && array[0] == 0 && array[3] == 0 && array[5] == 0) {
        ans = "ACB";
    } else if (array[0] == 1 && array[3] == 1 && array[5] == 1 && array[1] == 0 && array[2] == 0 && array[4] == 0) {
        ans = "BCA";
    } else if (array[0] == 1 && array[3] == 1 && array[4] == 1 && array[1] == 0 && array[2] == 0 && array[5] == 0) {
        ans = "BAC";
    } else {
        ans = "Impossible";
    }
    cout << ans << "\n";
}