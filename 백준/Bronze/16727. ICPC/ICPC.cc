#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + d > b + c)
        cout << "Persepolis";
    else if (a + d < b + c)cout << "Esteghlal";
    else
    {
        if(b == d)
            cout << "Penalty";
        else
        {
            if(b < d)
                cout << "Persepolis";
            else
                cout << "Esteghlal";
        }
    }
}