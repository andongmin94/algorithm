#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    //
    string s[] = {"aya", "ye", "woo", "ma"};
    
    for (auto e : babbling)
    {
        vector<string> v;
        string s2 = "";
        for (auto e2 : e)
        {
            s2 += e2; // 버블링 요소에서 한 글자씩 꺼내서 넣음
            for (auto e3 : s)
            {
                if (s2 == e3)
                {
                    v.push_back(s2);
                    s2 = "";
                    break;
                }
            }
        }
        bool dbl = false;
        // 연속된 단어 중복 검사
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                dbl = true;  // 연속된 중복 단어가 있으면 중복으로 처리
                break;
            }
        }
        
        if (!dbl && s2 == "") answer++;
    }
    //
    return answer;
}