#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
}

int main() {
    ll n, m; cin >> n >> m;
    int m2 = m;
    vector <pair<int, int>> v;
    while (m--) {
        ll a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end(), sortbysec);
    int sum = 0;
    for (int i = 0; i < m2; i++) {
        if (n >= v[i].first) {
            sum += v[i].first * v[i].second;
            n -= v[i].first;
        } else {
            sum += n * v[i].second;
            break;
        }
    }
    cout << sum << "\n";
}