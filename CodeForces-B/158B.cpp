#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#define sewailam                      \
	ios_base::sync_with_stdio(false); \
	cout.tie(NULL);                   \
	cin.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	sewailam;
	int n;
	cin >> n;
	int f[5]{};
	int x;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		f[x]++;
	}
	ll ans;
	f[1] -= min(f[3], f[1]);
	ans = f[4] + f[3] + f[2] / 2;
	f[2] %= 2;
	if (f[2])
	{
		if (f[1] > 1)
			f[1] -= 2;
		else
			f[1] = 0;
		ans++;
	}
 
	ans += (f[1] / 4);
	f[1] = (f[1] % 4 > 0) ? 1 : 0;
	cout << ans + f[1];
}