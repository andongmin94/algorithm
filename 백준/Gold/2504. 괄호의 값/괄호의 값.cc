#include <bits/stdc++.h>

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char> stack;
    string string;
    
    cin >> string;
    int sum = 0;
    int temp = 1;

    for(int i = 0; i < string.size(); i++)
    {
        if(string[i] == '(')
        {
            temp *= 2;
            stack.push(string[i]);
        }
        else if(string[i] == '[')
        {
            temp *= 3;
            stack.push(string[i]);
        }
        else if(string[i] == ')')
        {
            if(stack.empty() || stack.top() != '(')
            {
                cout << 0;
                return 0;
            }
            if(string[i - 1] == '(')
                sum += temp;
            
            stack.pop();
            temp /= 2;   
        }
        else
        {
            if(stack.empty() || stack.top() != '[')
            {
                cout << 0;
                return 0;
            }
            if(string[i - 1] == '[')
                sum += temp;
            
            stack.pop();
            temp /= 3;
        }
    }
    if(stack.empty()) cout << sum;
    else cout << 0;
}