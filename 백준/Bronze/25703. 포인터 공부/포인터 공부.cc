#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << "int a;\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "int ";
        int j = i;
        while (j--)
            cout << '*';
        if (i == 1) cout << "ptr = &a;\n";
        else if (i == 2) cout << "ptr2 = &ptr;\n";
        else cout << "ptr" << i << " = &ptr" << i - 1 << ";\n";
    }
}
