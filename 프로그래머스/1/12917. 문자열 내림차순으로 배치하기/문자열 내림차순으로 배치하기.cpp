#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    //
    int arr[26] = {0,};
    int arr2[26] = {0,};
    for (auto e : s)
        if (e - 'a' >= 0) arr[e - 'a']++;
        else arr2[e - 'A']++;
    for (int i = 25; i >= 0; i--)
        while(arr[i]--)
            answer += i + 'a';
    for (int i = 25; i >= 0; i--)
        while(arr2[i]--)
            answer += i + 'A';
    //
    return answer;
}