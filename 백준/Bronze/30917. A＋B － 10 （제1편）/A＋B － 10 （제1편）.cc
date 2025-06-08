#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 1, b = 1;
    int temp_a = 0, temp_b = 0;
    while (true)
    {
        if (!temp_a)
        {
            cout << "? A " << a << endl;
            cin >> temp_a;
            if (!temp_a) a++;
        }
        else
        {
            cout << "? B " << b << endl;
            cin >> temp_b;
            if (!temp_b) b++;
        }

        if (temp_a && temp_b) break;
    }
    cout << "! " << a + b;
}
