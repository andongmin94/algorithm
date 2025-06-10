#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 현재 날짜 입력
    char q, w;
    int year, month, day;
    cin >> year >> q >> month >> w >> day;

    int cnt = 0;
    int n;
    cin >> n;

    while (n--)
    {
        // 기프티콘 날짜 입력
        char q_, w_;
        int y, m, d;
        cin >> y >> q_ >> m >> w_ >> d;

        // 날짜 비교
        if (y > year || 
            (y == year && m > month) || 
            (y == year && m == month && d >= day)) {
            cnt++;
            }
    }

    cout << cnt << '\n';
}