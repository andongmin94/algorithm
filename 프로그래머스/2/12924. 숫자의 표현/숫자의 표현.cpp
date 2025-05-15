#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int t = i;
        while (sum < n)
            sum += t++;
        if (sum == n) answer++;
    }
    return answer;
}