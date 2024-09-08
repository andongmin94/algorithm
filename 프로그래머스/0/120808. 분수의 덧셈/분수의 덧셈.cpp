#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    //
    int a = numer1 * denom2 + numer2 * denom1;
    int b = denom1 * denom2;
    for (int i = 2; i < b; i++)
    {
        while(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
    }
    
    answer.push_back(a);
    answer.push_back(b);
    //
    return answer;
}