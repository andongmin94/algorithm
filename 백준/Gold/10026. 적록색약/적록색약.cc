#include <bits/stdc++.h>

using namespace std;

char dist[101][101]={0,};
int vis1[101][101]={0,};
int vis2[101][101]={0,};

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
        for (int j = 0; j < n; j++)
        {
            if (vis1[i][j] == 0)
            {
                queue<pair<int,int>> Q;
                Q.push({i, j});
                vis1[i][j] = 1;
                cnt1++;
                while (!(Q.empty()))
                {
                    pair<int, int> p = Q.front();
                    Q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = p.first + dx[k];
                        int ny = p.second + dy[k];

                        if(nx >= 0 && nx < n && ny >= 0 && ny < n && dist[nx][ny] == dist[p.first][p.second] && vis1[nx][ny] == 0)
                        {
                            Q.push({nx,ny});
                            vis1[nx][ny] = 1;
                        }
                    }
                }
            }
            if (vis2[i][j] == 0)
            {
                queue<pair<int,int>> Q;
                Q.push({i, j});
                vis2[i][j] = 1;
                cnt2++;
                while (!(Q.empty()))
                {
                    pair<int, int> p = Q.front();
                    Q.pop();
                    char temp = dist[p.first][p.second];
            
                    if (temp == 'B')
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            int nx = p.first + dx[k];
                            int ny = p.second + dy[k];
            
                            if(nx >= 0 && nx < n && ny >= 0 && ny < n && dist[nx][ny] == 'B' && vis2[nx][ny] == 0)
                            {
                                Q.push({nx,ny});
                                vis2[nx][ny] = 1;
                            }
                        }
                    }
                    else
                    {
                        for (int k = 0; k < 4; k++)
                        {
                            int nx = p.first + dx[k];
                            int ny = p.second + dy[k];
            
                            if(nx >= 0 && nx < n && ny >= 0 && ny < n && vis2[nx][ny] == 0 && (dist[nx][ny] == 'R' || dist[nx][ny] == 'G'))
                            {
                                Q.push({nx,ny});
                                vis2[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }

    cout << cnt1 << " " << cnt2;
}
