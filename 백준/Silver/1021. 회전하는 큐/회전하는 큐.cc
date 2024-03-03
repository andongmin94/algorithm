#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> d;
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        d.push_back(i + 1);
    while(m--)
    {
        int v;
        cin >> v;

        if (v != d.front())
        {
            deque<int> t_a = d;
            deque<int> t_b = d;
            int temp_a = 0, temp_b = 0;
            while (v != t_a.front())
            {
                t_a.push_back(t_a.front());
                t_a.pop_front();
                temp_a++;
            }
            while (v != t_b.front())
            {
                t_b.push_front(t_b.back());
                t_b.pop_back();
                temp_b++;
            }
            cnt += temp_a < temp_b ? temp_a : temp_b;
            d = temp_a < temp_b ? t_a : t_b;
        }
        d.pop_front();
    }
    cout << cnt;
}
