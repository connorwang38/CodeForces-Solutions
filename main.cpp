#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool dir(int f, int s, int start, int finish, string str) {
    int lcount = 0;
    for (int i = start; i < start + (finish - start) / 2; i++) {
        if (str[i] == 'a') {
            lcount++;
        }
    }
    int lcount2 = 0;
    for (int i = start + (finish - start) / 2 + 1; i < finish; i++) {
        if (str[i] == 'a') {
            lcount2++;
        }
    }
    return lcount > lcount2;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int k = n;
        int count = 0;
        while (k > 1) {
            count++;
            k /= 2;
        }
        bool directions[n];
        int lcount = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == 'a') {
                lcount++;
            }
        }
        int lcount2 = 0;
        for (int i = n / 2 + 1; i < n; i++) {
            if (s[i] == 'a') {
                lcount2++;
            }
        }
        cout << lcount << " " << lcount2 << "\n";
    }
}