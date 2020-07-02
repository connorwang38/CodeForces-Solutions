
// #include <iostream>
//#include <fstream>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
 
int main() {
	int cases;
	long n;
	long c;
	long count = 0;
	cin >> cases;
	F0R (i, cases) {
		cin >> n;
		vi v(n);
		F0R (j, n) {
			cin >> v.at(j);
		}
		sort(v.begin(), v.end());
		c = 0;
		F0R(j, n) {
			if (++c == v.at(j)) {
				count++;
				c = 0;
			}
		}
		cout << count << "\n";
		count = 0;
	}
	return 0;
}