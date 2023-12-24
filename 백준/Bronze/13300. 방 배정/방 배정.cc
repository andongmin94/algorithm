#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, sum = 0;
    cin >> a >> b;
    vector<int> student_0(6);
    vector<int> student_1(6);
    for(int i = 0; i < a; i++)
    {
        int s, y;
        cin >> s >> y;
        if (s == 0)
            student_0[y-1]++;
        else
            student_1[y-1]++;
    }
    for(int e: student_0)
    {
        sum += e / b;
        if(e % b != 0)
            sum += 1;
    }
    for(int e: student_1)
    {
        sum += e / b;
        if(e % b != 0)
            sum += 1;
    }
    cout << sum << '\n';
}
