#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    //
    int arr[26] = {0,};
    for (const auto& e : s)
        arr[e - 'a']++;
    for (int i = 0; i < 26; i++)
        if(arr[i] == 1) answer += i + 'a';
    //
    return answer;
}