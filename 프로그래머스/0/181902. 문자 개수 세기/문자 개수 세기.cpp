#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    //
    int arr[52] = {0,};
    for (const auto& e : my_string)
    {
        if (e >= 'a' && e <= 'z')
            arr[e - 'a' + 26] ++;
        if (e >= 'A' && e <= 'Z')
            arr[e - 'A']++;
    }
    for (const auto& e : arr)
        answer.push_back(e);
    //
    return answer;
}