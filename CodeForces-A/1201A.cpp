
//Bismillahir Rahmanir Rahim
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, m, ca=0, cb=0, cc=0, cd=0, ce=0, sum=0;
    cin>>n>>m;
    int mark[m], v[m];
    char s[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>s[i][j];
        }
    }
    for(int i=0; i<m; i++) cin>>mark[i];
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(s[i][j]=='A') ca++;
            else if(s[i][j]=='B') cb++;
            else if(s[i][j]=='C') cc++;
            else if(s[i][j]=='D') cd++;
            else if(s[i][j]=='E') ce++;
        }
            v[j]=max(max(max(max(ca, cb), cc), cd), ce);
            sum+=v[j]*mark[j];
            ca=0;
            cb=0;
            cc=0;
            cd=0;
            ce=0;

    }
    cout<<sum;


}

