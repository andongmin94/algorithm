#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    //
    vector<int> v(n, 0);
    vector<vector<int>> arr(n, v);
    
    int a = 1, stack = 0;
    int w = 0, h = 0;
    while(a <= n * n)
    {
        if (stack % 4 == 0)
        {
            while (h < n && arr[w][h] == 0)
            {
                arr[w][h] = a++;
                h++;
            }
            h--;
            w++;
        }
        else if (stack % 4 == 1)
        {
            while(w < n && arr[w][h] == 0)
            {
                arr[w][h] = a++;
                w++;
            }
            w--;
            h--;
        }
        
        if (stack % 4 == 2)
        {
            while(h >= 0 && arr[w][h] == 0)
            {
                arr[w][h] = a++;
                h--;
            }
            h++;
            w--;
        }
        else if (stack % 4 == 3)
        {
            while(w >= 0 && arr[w][h] == 0)
            {
                arr[w][h] = a++;
                w--;
            }
            h++;
            w++;
        }
        stack++;
    }   
    answer = arr;
    //
    return answer;
}