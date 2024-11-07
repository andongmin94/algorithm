#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, p, m, n;
    cin >> a >> b >> c >> d >> p >> m >> n;

    int t = max(p, max(m, n));

    int cnt_p = 0, cnt_m = 0, cnt_n = 0;
    bool a_ = true, c_ = true;
    int cnt_a = -1, cnt_c = -1;

    for (int i = 0; i <= t; i++)
    {
        if (i == p)
        {
            if (a_) cnt_p++;
            if (c_) cnt_p++;
        }
        if (i == m)
        {
            if (a_) cnt_m++;
            if (c_) cnt_m++;
        }
        if (i == n)
        {
            if (a_) cnt_n++;
            if (c_) cnt_n++;
        }

        cnt_a++;
        cnt_c++;
        if(a_ && cnt_a == a) 
        {
            a_ = false;
            cnt_a = 0;
        }
        if(c_ && cnt_c == c)
        {
            c_ = false;
            cnt_c = 0;   
        };
        if(!a_ && cnt_a == b) 
        {
            a_ = true;
            cnt_a = 0;
        }
        if(!c_ && cnt_c == d)
        {
            c_ = true;
            cnt_c = 0;   
        };
    }
    cout << cnt_p << '\n' << cnt_m << '\n' << cnt_n;
}