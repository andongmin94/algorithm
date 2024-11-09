#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int a = 1; a <= 100; a++)
    {
        for (int b = 2; b < 100; b++)
        {
            for (int c = 2; c < 100; c++)
            {
                for (int d = 2; d < 100; d++)
                {
                    int result = b * b * b + c * c * c + d * d * d;

                    if (a * a * a == result && b <= c && c <= d)
                    {
                        cout << "Cube = " << a << ", " << "Triple = " << "(" << b << "," << c << "," << d << ")" << endl;
                    }
                }
            }
        }
    }
}