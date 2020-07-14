#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void decToBinary(int n) 
{
    int binaryNum[32] = { 0 }; 
    int i = 0;
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    int sum = 0;
    for (int j = i - 1; j >= 0; j--) {
        sum += binaryNum[j];
    }
    cout << sum << endl;
} 

int main() {
    int n; cin >> n;
    decToBinary(n);
}