#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    
    while(t--)
    {
        int yon = 0, kor = 0;
        int n = 9;
        while(n--)
        {
            int a, b;
            cin >> a >> b;
            yon += a;
            kor += b;
        }
        if (yon > kor) cout << "Yonsei\n";
        if (yon < kor) cout << "Korea\n";
        if (yon == kor) cout << "Draw\n";
    }
}
