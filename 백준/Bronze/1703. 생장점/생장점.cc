#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true)
    {
        int a;
        cin >> a;
        if (!a) break;

        int b = 2 * a;
        vector<int> c;
        
        while (b--)
        {
            int d;
            cin >> d;
            c.push_back(d);
        }

        int sum = 1;
        for (int i = 0; i < c.size() - 1; i+= 2)
        {
            sum *= c[i];
            sum -= c[i + 1];
        }
        cout << sum << '\n';
    }
}
