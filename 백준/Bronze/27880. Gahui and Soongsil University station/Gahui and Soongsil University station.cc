#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        string s;
        int temp;
        cin >> s >> temp;
        
        if (s == "Es") sum += temp * 21;
        else sum += temp * 17;
    }
    cout << sum;
}
