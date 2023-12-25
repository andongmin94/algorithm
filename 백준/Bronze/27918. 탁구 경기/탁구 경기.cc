#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    int D = 0, P = 0;
    for (int i = 0; i < a; i++)
    {
        char b;
        cin >> b;
        
        if (b == 'D')
            D++;
        else P++;

        if (D-P == 2 || P-D == 2)
            break;
    }
    cout << D << ":" << P << '\n';
}