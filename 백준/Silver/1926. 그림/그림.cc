#include <bits/stdc++.h>

using namespace std;

int board[500][500] = {0,};
int visited[500][500] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int art = 0;
    int max = 0;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = 0;
            if (board[i][j] == 1 && visited[i][j] == 0)
            {
                q.push({i, j});
                art++;
                temp++;
                visited[i][j] = 1;
            }

            while(!q.empty())
            {
                pair<int, int> t = q.front();
                q.pop();
                
                for (int k = 0; k < 4; k++)
                {
                    int ny = t.first + dy[k];
                    int nx = t.second + dx[k];

                    if (nx >= 0 && ny >= 0 && nx < m && ny < n)
                    {
                        if (board[ny][nx] == 1 && visited[ny][nx] == 0)
                        {
                            temp++;
                            visited[ny][nx]++;
                            q.push({ny, nx});
                        }
                    }
                }
            }

            if (max < temp) max = temp;
        }
    }

    cout << art << '\n' << max;
}
