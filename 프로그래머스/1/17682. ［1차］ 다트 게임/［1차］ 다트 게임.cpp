#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    //
    int one = -100;
    int two = -100;
    int thr = -100;
    string t = "";
    for (int i = 0; i < dartResult.length(); i++)
    {
        if (isdigit(dartResult[i])) t += dartResult[i];
        else if (t != "")
        {
            if (one == -100) one = stoi(t);
            else if (two == -100) two = stoi(t);
            else if (thr == -100) thr = stoi(t);
            t = "";
        }
        if (dartResult[i] == 'D' || dartResult[i] == 'T')
        {
            if (dartResult[i] == 'D')
            {
                if (thr != -100) thr = pow(thr, 2);
                else if (two != -100) two = pow(two, 2);
                else if (one != -100) one = pow(one, 2);
            }
            if (dartResult[i] == 'T')
            {
                if (thr != -100) thr = pow(thr, 3);
                else if (two != -100) two = pow(two, 3);
                else if (one != -100) one = pow(one, 3);
            } 
        }
        if (dartResult[i] == '*' || dartResult[i] == '#')
        {
            if (dartResult[i] == '*')
            {
                if (thr != -100)
                {
                    thr *= 2;
                    two *= 2;
                }
                else if (two != -100)
                {
                    two *= 2;
                    one *= 2;
                }
                else if (one != -100) one *= 2;
            }
            if (dartResult[i] == '#')
            {
                if (thr != -100) thr *= -1;
                else if (two != -100) two *= -1;
                else if (one != -100) one *= -1;
            }
        }
    }
    answer = one + two + thr;
    //
    return answer;
}