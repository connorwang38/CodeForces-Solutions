#include<bits/stdc++.h>
#define ll long long int
#define r_0 return 0
#define fr first
 
#define sc second
#define pb push_back
#define sz() size()
#define TIME ios_base::sync_with_stdio(0)
using namespace std;
ll n,m,l,cnt,ans,one=1,mx,mn;
int sum;
string s,s1,s2;
char c;
int a[10000001];
float f,yak=1;
int main()
{
    TIME;
    cin >> n;
    if ( n == 7 or n == 47 or n == 744 or n % 4 == 0 or n == 77 or n == 477 or n == 49 or n == 42 or n % 7 == 0 or n == 799 or n == 94 or n == 141)
    cout << "YES";
    else
        cout << "NO";
}