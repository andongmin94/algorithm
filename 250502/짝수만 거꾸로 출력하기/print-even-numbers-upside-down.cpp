#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    vector<int> v;
    while(n--)
    {
        int a; cin >> a;
        v.push_back(a);
    }
    for (int i = v.size() - 1; i >= 0; i --)
        if (v[i] % 2 == 0) cout << v[i] << ' ';
    return 0;
}