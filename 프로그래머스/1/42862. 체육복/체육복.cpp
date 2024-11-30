#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    //
    answer = n - lost.size();
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for(int i=0; i < lost.size(); i++)
    {
        for(int j=0; j< reserve.size(); j++)
        {
            if(reserve[j] == lost[i])
            {
                answer++;
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }
    for(int i=0; i < lost.size(); i++)
    {
        for(int j=0; j < reserve.size(); j++)
        {
            if(reserve[j] == lost[i] - 1 || reserve[j] == lost[i] + 1)
            {
                answer++;
                lost[i]= -1;
                reserve[j]= -1;
                break;
            }
        }
    }
    //
    return answer;
}