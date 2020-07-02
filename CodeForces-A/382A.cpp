#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string a,b;
int p,l1,l2;
int main(){
    getline(cin,a);
    getline(cin,b);
    l1=a.length();
    l2=b.length();
    for(int i=0;i<l1;i++){
        if(a[i]=='|') p=i;
    }
    int lt=p,rt=l1-1-p;
    if((lt+rt+l2)%2!=0) printf("Impossible\n");
    else if(min(lt,rt)+l2<max(lt,rt)) printf("Impossible\n");
    else{
        int Lp=(l2+rt-lt)/2;
        int Rp=(l2+lt-rt)/2;
        for(int i=0;i<Lp;i++) printf("%c",b[i]);
        cout << a;
        for(int i=Lp;i<l2;i++) printf("%c",b[i]);
        printf("\n");
    }
    return 0;
}