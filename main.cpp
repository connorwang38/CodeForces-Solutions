#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <int> a[100000];
int visited[100000];

void dfs (int k) {
    if (!visited[k]) {
        visited[k] = 1;
        for (int i = 0; i < a[k].size(); i++) {
            if(!visited[a[k][i]]) {
                dfs(a[k][i]);
            }
        }
    }
}

int main() {
    int n = 5;
    while (n--) {
        int p, q; cin >> p >> q;
        a[p].push_back(q);
    }

    int l, m; cin >> l >> m;
    dfs(l);
    if (visited[m] == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}