#include <bits/stdc++.h>

using namespace std;

char dist[100][100];
int vis1[100][100];
int vis2[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;

    int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1};
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dist[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis1[i][j] == 0)
            {
                queue<pair<int,int>> Q;
                Q.push({i,j});
                vis1[i][j] = 1;
                cnt1++;

                while(!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];

                        if (nx < 0 || nx >= n) continue;
                        if (ny < 0 || ny >= n) continue;
                        if (vis1[nx][ny] != 0) continue;
                        if (dist[cur.first][cur.second] != dist[nx][ny]) continue;

                        Q.push({nx, ny});
                        vis1[nx][ny] = 1;
                    }
                }
            }

            if (vis2[i][j] == 0)
            {
                queue<pair<int,int>> Q;
                Q.push({i, j});
                vis2[i][j] = 1;
                cnt2++;

                while(!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    char temp = dist[cur.first][cur.second];

                    if (temp == 'B')
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            int nx = cur.first + dx[k];
                            int ny = cur.second + dy[k];

                            if (nx < 0 || nx >= n) continue;
                            if (ny < 0 || ny >= n) continue;
                            if (vis2[nx][ny] != 0) continue;
                            if (dist[nx][ny] != 'B') continue;

                            Q.push({nx, ny});
                            vis2[nx][ny] = 1;
                        }
                    }
                    else
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            int nx = cur.first + dx[k];
                            int ny = cur.second + dy[k];

                            if (nx < 0 || nx >= n) continue;
                            if (ny < 0 || ny >= n) continue;
                            if (vis2[nx][ny] != 0) continue;
                            if (dist[nx][ny] != 'B')
                            {
                                Q.push({nx, ny});
                                vis2[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt1 << ' ' << cnt2;
}