#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    cout << v[1];
    return 0;
}