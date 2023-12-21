#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int c, sum = 0;
    bool breaker = false;
    for (int i = 0; i < 9; i++)
    {
        cin >> c;
        sum += c;
        a.push_back(c);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            int temp = sum;
            temp -= a[i];
            temp -= a[j];
            if (temp == 100)
            {
                for (int k = 0; k < a.size(); k++)
                {
                    if (k != i && k != j)
                        cout << a[k] << '\n';
                }
                breaker = true;
                break;
            }
        }
        if (breaker == true)
            break;
    }
}
