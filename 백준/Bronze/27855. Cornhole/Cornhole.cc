#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<int,int> a;
    pair<int,int> b;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    int a_score = a.first * 3 + a.second;
    int b_score = b.first * 3 + b.second;

    if(a_score != b_score)
    {
        cout << (a_score > b_score ? 1 : 2) << " " << (a_score > b_score ? a_score - b_score : b_score - a_score);
    }
    else cout << "NO SCORE";
}