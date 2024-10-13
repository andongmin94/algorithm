#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> v;
    vector<char> v2;

    long long num;
    char op;
    
    while (true)
    {
        cin >> num >> op;
        v.push_back(num);
        if (op == '=') break;
        v2.push_back(op);
    }

    long long sum = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (j == 0) sum += v[j];
        else
        {
            if (v2[j-1] == '+') sum += v[j];
            if (v2[j-1] == '-') sum -= v[j];
            if (v2[j-1] == '*') sum *= v[j];
            if (v2[j-1] == '/') sum /= v[j];
        }
    }
    cout << sum;
}
