#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char rule(char c, int i, char last) {
    int val = c - 'A' + 1;
    char ans;
    if (i == 1) {
        val *= 2;
        while (val < 0) {
            val += 26;
        }
        val = (val + last - 'A') % 26;
        ans = 'A' + val;
        cout << ans;
    } else if (i == 2) {
        val = val % 3 * 5;
        while (val < 0) {
            val += 26;
        }
        val = (val + last - 'A') % 26;
        ans = 'A' + val;
        cout << ans;
    } else if (i == 3) {
        val = val / 4 * -8;
        while (val + 26 <= 0) {
            val += 26;
        }
        val = (val + last - 'A') % 26;
        if (val < 0) {
            val += 26;
        }
        ans = 'A' + val;
        cout << ans;
    } else if (i == 4) {
        double newVal = (double) val;
        val = -12 * (int)(sqrt(newVal));
        while (val + 26 < 0) {
            val += 26;
        }
        val = (val + last - 'A') % 26;
        if (val < 0) {
            val += 26;
        }
        ans = 'A' + val;
        cout << ans;
    } else {
        int sum = 0;
        for (int j = 1; j <= val; j++) {
            if (val % j == 0) {
                sum += j;
            }
        }
        sum *= 10;
        while (val < 0) {
            sum += 26;
        }
        sum = (sum + last - 'A') % 26;
        ans = 'A' + sum;
        cout << ans;
    }
    return ans;
}

int main() {
    for (int i = 0; i < 5; i++) {
        char last = 'A';
        char c;
        int n;
        string s; cin >> s;
        for (int j = 0; j < s.length(); j += 2) {
            c = s[j];
            n = s[j + 1] - '0';
            last = rule(c, n, last);
        }
        cout << "\n";
    }
}