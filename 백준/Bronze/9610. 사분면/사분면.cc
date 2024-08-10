#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;

    int n;
    cin >> n;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > 0 && b > 0) q1++;
        if (a > 0 && b < 0) q4++;
        if (a < 0 && b > 0) q2++;
        if (a < 0 && b < 0) q3++;
        if (!a || !b) axis++;
    }
    cout << "Q1: " << q1 << "\nQ2: " << q2 << "\nQ3: " << q3 << "\nQ4: " << q4 << "\nAXIS: " << axis;
}
