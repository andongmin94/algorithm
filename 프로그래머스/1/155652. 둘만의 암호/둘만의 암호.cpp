#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int arr[26] = {0,};
    for (auto e : skip)
        arr[e - 'a']++;
    //
    for (auto e : s)
    {
        int temp = index;
        while(temp--)
        {
            e++;
            if (e == 'z' + 1) e = 'a';
            while(arr[e - 'a'])
            {
                e++;
                if (e == 'z' + 1) e = 'a';
            }
        }
        answer += e;
    }
    //
    return answer;
}