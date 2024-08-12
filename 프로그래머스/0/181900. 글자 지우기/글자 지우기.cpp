#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    //
    int arr[100] = {0,};
    for (int i = 0; i < my_string.length(); i++)
        arr[i]++;
    for (int i = 0; i < indices.size(); i++)
        arr[indices[i]]--;
    for (int i = 0; i < my_string.length(); i++)
        if (arr[i]) answer += my_string[i];
    //
    return answer;
}