#include <bits/stdc++.h>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    //
    for (int i = 0; i < arr1.size(); i++)
    {
        string s = "";
        int k = arr1[i] | arr2[i];
        string s2 = bitset<16>(k).to_string();
        for (int j = 16 - n; j < 16; j++)
            if (s2[j] == '0') s += " ";
            else s += "#";
        
        answer.push_back(s);
    }
    //
    return answer;
}