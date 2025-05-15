#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    int round = 0, zero = 0;
    
    while(s != "1")
    {
        string temp = "";
        int size = 0;
        round++;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') zero++;
            else temp += "1";
        }
        int num = temp.size();
        s = "";
        while(num > 0)
        {
            s += to_string(num % 2);
            num /= 2;
        }
    }
    answer[0] = round;
    answer[1] = zero;
    return answer;
}