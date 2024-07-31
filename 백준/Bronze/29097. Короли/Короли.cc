#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k, a, b, c;
    cin >> n >> m >> k >> a >> b >> c;

    int Joffrey_Army = n * a;
    int Robb_Army = m * b;
    int Stannis_Army = k * c;

    if (max(Joffrey_Army, max(Robb_Army, Stannis_Army)) == Joffrey_Army)
        cout << "Joffrey ";
    if (max(Joffrey_Army, max(Robb_Army, Stannis_Army)) == Robb_Army)
        cout << "Robb ";
    if (max(Joffrey_Army, max(Robb_Army, Stannis_Army)) == Stannis_Army)
        cout << "Stannis";
}
