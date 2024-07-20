#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ab = to_string(a) + to_string(b);
    string cd = to_string(c) + to_string(d);
    long long ab2 = stol(ab);
    long long cd2 = stol(cd);
    cout << ab2 + cd2;
}
