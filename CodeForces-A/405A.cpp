#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    int array [t];
    for (int i = 0; i < t; i++) {
        cin >> array[i];
    }
    int n = sizeof(array)/sizeof(array[0]);
    sort(array, array + n);
    for (int i = 0; i < t; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
