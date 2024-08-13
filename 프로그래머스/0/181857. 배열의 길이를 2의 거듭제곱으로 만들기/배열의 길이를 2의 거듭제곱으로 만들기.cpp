#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    //
    int idx = 0;
    while(arr.size() < pow(2, idx) || pow(2, idx) < arr.size())
    {
        if (arr.size() < pow(2, idx))
            while (arr.size() != pow(2, idx))
                arr.push_back(0);

        else if (pow(2, idx) < arr.size())
            idx++;
    }
    answer = arr;
    //
    return answer;
}