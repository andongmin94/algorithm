#include <bits/stdc++.h>

using namespace std;

string func(string& s)
{
    string input[12] =
    {
        "CU", ":-)", ":-(", ";-)", ":-P", "(~.~)", "TA",
        "CCC", "CUZ", "TY", "YW", "TTYL"
    };

    string output[12] =
    {
        "see you", "I’m happy", "I’m unhappy", "wink",
        "stick out my tongue", "sleepy", "totally awesome",
        "Canadian Computing Competition", "because", "thank-you",
        "you’re welcome", "talk to you later"
    };
    
    for (int i = 0; i < 12; i++)
        if (s == input[i])
            return output[i];

    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        string s;
        cin >> s;
        cout << func(s) << '\n';
        if (s == "TTYL")
            break;
    }
}
