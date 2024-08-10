#include <bits/stdc++.h>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    //
    string a = "", b = "", c = "";
    for (int i = 0; i < binomial.length(); i++)
    {
        if (b == "" && binomial[i] != ' ')
            a += binomial[i];
        if (b == "" && binomial[i] == ' ')
        {
            b += binomial[i + 1];
            for (int j = i + 3; j < binomial.length(); j++)
                c += binomial[j];
            break;
        }
    }
    int a_ = stoi(a);
    int c_ = stoi(c);
    if (b == "+") answer = a_ + c_;
    if (b == "-") answer = a_ - c_;
    if (b == "*") answer = a_ * c_;
    //
    return answer;
}