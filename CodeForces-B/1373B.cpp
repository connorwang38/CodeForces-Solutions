#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string pattern = "10";
        int count = 0;
        std::string::size_type i = s.find(pattern);
        while (i != std::string::npos) {
            s.erase(i, pattern.length());
            i = s.find(pattern);
            count++;
        }
        pattern = "01";
        i = s.find(pattern);
        while (i != std::string::npos) {
            s.erase(i, pattern.length());
            i = s.find(pattern);
            count++;
        }
        if (count % 2 == 0) {
            cout << "NET" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
}