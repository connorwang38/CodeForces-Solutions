#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string t;
    getline(cin, t);
    int n = stoi(t);
    int answers[n];
    string test = "abcdefghijklmnopqrstuvwxyz";
    for (int j = 0; j < n; j++) {
        vector <int> v (26);
        fill(v.begin(), v.end(), 0);
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
            for (int k = 0; k < 26; k++) {
                if (s[i] == test[k]) {
                    v[k] += 1;
                }
            }
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int i = 26; i > 0; i--) {
            sum += i * v[i - 1];
        }
        answers[j] = sum;
    }
    for (int i = 0; i < n; i++) {
        cout << "Case #" << i + 1 << ": " << answers[i] << "\n";
    }
}