#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int array[4];
    for (int i = 0; i < 4; i++) {
        cin >> array[i];
    }
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1') {
            sum += array[0];
        } else if (s.at(i) == '2') {
            sum += array[1];
        } else if (s.at(i) == '3') {
            sum += array[2];
        } else if (s.at(i) == '4') {
            sum += array[3];
        }
    }
    cout << sum << endl;
}
