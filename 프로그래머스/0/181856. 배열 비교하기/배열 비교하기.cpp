#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    //
    if (arr1.size() < arr2.size()) answer = -1;
    else if (arr1.size() > arr2.size()) answer = 1;
    else
    {
        int l = 0, r = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            l += arr1[i];
            r += arr2[i];
        }
        if (l < r) answer = -1;
        else if (l > r) answer = 1;
    }
    //
    return answer;
}