#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string s;
    cin >> s;
    int cnt = 0;
    int weekends[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    string weekends_s[] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    int s_ = 0;
    for (int i = 0; i < 7; i++)
        if (s == weekends_s[i]) s_ = i;

    int one = 0;
    for (int i = 1; i < m1; i++)
        one += weekends[i];
    one += d1;

    int two = 0;
    for (int i = 1; i < m2; i++)
        two += weekends[i];
    two += d2;
    int k = two - one;
    cnt += k / 7;
    k %= 7;
    if (s_ <= k) cnt++;

    cout << cnt;
    return 0;
}