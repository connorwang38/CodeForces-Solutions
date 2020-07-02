#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t, s = 0, d = 0;
    cin >> t;
    int c;
    deque <int> deq;
    for (int i = 0; i < t; i++) {
        cin >> c;
        deq.push_back(c);
    }
    for (int i = 0; i < t; i++) {
        if (i % 2 == 0) {
            s += max(deq.at(0), deq.at(deq.size() - 1));
            if (deq.at(0) >= deq.at(deq.size() - 1)) {
                deq.pop_front();
            } else {
                deq.pop_back();
            }
        } else {
            d += max(deq.at(0), deq.at(deq.size() - 1));
            if (deq.at(0) >= deq.at(deq.size() - 1)) {
                deq.pop_front();
            } else {
                deq.pop_back();
            }
        }
    }
    cout << s << " " << d << endl;
}