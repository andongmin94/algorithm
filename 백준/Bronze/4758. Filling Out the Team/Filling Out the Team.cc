#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double a;
        int b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        bool bo = true;
        if (a <= 4.5 && b >= 150 && c >= 200)
        {
            bo = false;
            cout << "Wide Receiver ";
        }
        if (a <= 6.0 && b >= 300 && c >= 500)
        {
            bo = false;
            cout << "Lineman ";
        }
        if (a <= 5.0 && b >= 200 && c >= 300)
        {
            bo = false;
            cout << "Quarterback ";
        }
        if (bo) cout << "No positions";

        cout << '\n';
    }
}
