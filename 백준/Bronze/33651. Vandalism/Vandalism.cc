#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;

    int arr[26] = {0,};
    for (auto e : s)
        arr[e - 'A']++;
    if (!arr['U' - 'A']) cout << 'U';
    if (!arr['A' - 'A']) cout << 'A';
    if (!arr['P' - 'A']) cout << 'P';
    if (!arr['C' - 'A']) cout << 'C';
}
