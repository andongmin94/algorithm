#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, k;
    getline(cin, s);
    getline(cin, k);
    int cnt = 0;

    if (k.empty()) {
        cout << "0\n";
        return 0;
    }

    // 길이 확인 및 조정
    int s_length = s.length();
    int k_length = k.length();

    // 문자열의 길이가 너무 짧으면 카운트가 0
    if (s_length < k_length) {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i <= s.length() - k.length(); i++)
    {
        if (s[i] == k[0])
        {
            bool check = true;
            for (int j = 0; j < k.length(); j++)
            {
                if (s[i + j] != k[j])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cnt++;
                i += k.length() - 1;
            }
        }
    }
    cout << cnt;
}
