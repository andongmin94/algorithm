#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a = 0, b = 1.5;
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;
        
        if (i == 0) sum += n * 13;
        if (i == 1) sum += n * 7;
        if (i == 2) sum += n * 5;
        if (i == 3) sum += n * 3;
        if (i == 4) sum += n * 3;
        if (i == 5) sum += n * 2;
    }
    a += sum;
    sum = 0;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;
        
        if (i == 0) sum += n * 13;
        if (i == 1) sum += n * 7;
        if (i == 2) sum += n * 5;
        if (i == 3) sum += n * 3;
        if (i == 4) sum += n * 3;
        if (i == 5) sum += n * 2;
    }
    b += sum;

    if (a > b) cout << "cocjr0208";
    else cout << "ekwoo";
}