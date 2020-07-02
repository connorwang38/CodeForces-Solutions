#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, a, b, t;
	int count = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		count = 0;
		cin >> a >> b >> n;
		while (a <= n && b <= n) {
			if (a > b) {
				b += a;
			} else {
				a += b;
			}
			count ++;
		}
		cout << count << endl;
	}
	return 0;
}
