#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<pair<int, string>> teams =
    {
        {11, "A B C D E F G H J L M"},
        {9, "A C E F G H I L M"},
        {9, "A C E F G H I L M"},
        {9, "A B C E F G H L M"},
        {8, "A C E F G H L M"},
        {8, "A C E F G H L M"},
        {8, "A C E F G H L M"},
        {8, "A C E F G H L M"},
        {8, "A C E F G H L M"},
        {8, "A B C F G H L M"}
    };

    int cnt = teams[n - 1].first;
    string s = teams[n - 1].second;

    // 첫 번째 줄에 푼 문제 수 출력
    cout << cnt << "\n";
    cout << s;

}