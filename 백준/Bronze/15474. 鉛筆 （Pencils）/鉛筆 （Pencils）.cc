#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    int sum_a = ceil(N / A) * B;
    int sum_c = ceil(N / C) * D;
    cout << (sum_a > sum_c ? sum_c : sum_a) << '\n';
}
