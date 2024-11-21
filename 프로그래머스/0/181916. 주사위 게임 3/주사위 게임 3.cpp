#include <bits/stdc++.h>

using namespace std;

int arr[7] = {0,};

int solution(int a, int b, int c, int d) {
    int answer = 0;
    //
    arr[a]++;
    arr[b]++;
    arr[c]++;
    arr[d]++;
    int max_ = 0;
    int v = 0;
    for (int i = 1; i < 7; i++)
    {
        if (max_ < arr[i])
        {
            max_ = arr[i];
            v = i;
        }
    }
    if (max_ == 4) answer += 1111 * v;
    if (max_ == 3)
    {
        for (int i = 1; i < 7; i++)
        {
            if (arr[i] == 1)
                answer += pow(10 * v + i, 2);
        }
    }
    if (max_ == 2)
    {
        vector<int> k, k2;
        for (int i = 1; i < 7; i++)
        {
            if (arr[i] == 2) k2.push_back(i);
            if (arr[i] == 1) k.push_back(i);
        }
        if (k.empty()) answer += (k2[0] + k2[1]) * abs(k2[0] - k2[1]);
        else answer += k[0] * k[1];
    }
    if (max_ == 1)
    {
        for (int i = 1; i < 7; i++)
        {
            if (arr[i])
            {
                answer += i;
                break;   
            }
        }
    }
    //
    return answer;
}