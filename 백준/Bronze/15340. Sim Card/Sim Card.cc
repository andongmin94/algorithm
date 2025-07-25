#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int, int> one = {30, 40};
    pair<int, int> two = {35, 30};
    pair<int, int> thr = {40, 20};
    while (true)
    {
        int a, b; cin >> a >> b;

        if (a == 0 && b == 0) break;
        
        int q =  a * one.first + b * one.second;
        int w =  a * two.first + b * two.second;
        int e =  a * thr.first + b * thr.second;

        cout << min(q, min(w, e)) << '\n';
    }
}
