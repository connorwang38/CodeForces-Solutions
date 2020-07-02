#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, one = 0, two = 0, three = 0;
    cin >> n;
    vector <int> array;
    vector <int> onev;
    vector <int> twov;
    vector <int> threev;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        array.push_back(c);
        if (c == 1) {
            one++;
            onev.push_back(i + 1);
        } else if (c == 2) {
            two++;
            twov.push_back(i + 1);
        } else {
            three++;
            threev.push_back(i + 1);
        }
    }
    int total = min(min(one, two), three);
    cout << total << "\n";
    for (int i = 0; i < total; i++) {
        cout << onev[i] << " " << twov[i] << " " << threev[i] << "\n";
    }
}