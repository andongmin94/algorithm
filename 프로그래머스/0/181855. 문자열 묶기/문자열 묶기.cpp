#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    //
    int arr[100001] = {0,};
    for (const auto& e : strArr)
        arr[e.length()]++;
    int max = 0;
    for (int i = 0; i < strArr.size(); i++)
        if (max < arr[i]) max = arr[i];
    answer = max;
    //
    return answer;
}