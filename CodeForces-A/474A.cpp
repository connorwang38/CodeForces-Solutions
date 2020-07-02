#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string alpha = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char in;
    string str;
    cin >> in >> str;
    if (in == 'R') {
        for (char c : str) {
            cout << alpha[alpha.find(c) - 1];
        }
    } else {
        for (char c : str) {
            cout << alpha[alpha.find(c) + 1];
        }
    }
}
