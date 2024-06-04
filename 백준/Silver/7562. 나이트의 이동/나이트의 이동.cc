#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int dx[] = {1,2,2,1,-1,-2,-2,-1};
    int dy[] = {2,1,-1,-2,-2,-1,1,2};

    for (int i = 0; i < n; i ++)
    {
        int res = 10000000;

        int a;
        cin >> a;
        int b, c;
        cin >> b >> c;
        int board[301][301] = {0,};
        queue<pair<int,int>> q;
        q.push({b, c});
        
        cin >> b >> c;
        
        while(!q.empty())
        {
            pair<int,int> r = q.front();
            q.pop();
            if (r.first == b && r.second == c)
            {
                res = min(res, board[r.first][r.second]);
                cout << res << '\n';
                break;
            }
            else
            {
                for (int k = 0; k < 8; k++)
                {
                    int nx = r.first + dx[k];
                    int ny = r.second + dy[k];

                    if (nx >= 0 && nx < a && ny >= 0 && ny < a && board[nx][ny] == 0)
                    {
                        board[nx][ny] = board[r.first][r.second] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
}
