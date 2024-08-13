#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    //
    int idx;
    int v = 100;
    for (int i = 0; i < array.size(); i++)
    {
        if (abs(n - array[i]) < v)
        {
            v = abs(n - array[i]);
            idx = i;
        }
        if (abs(n - array[i]) == v)
        {
            if (array[i] < array[idx])
                idx = i;
        }
    }
    answer = array[idx];
    //
    return answer;
}