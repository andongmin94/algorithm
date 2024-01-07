#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int A, B, C;
    cin >> A >> B >> C;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);

    sort(v.begin(), v.end());
    cout << 2 * v[2] - v[1] - v[0] << '\n';
}
