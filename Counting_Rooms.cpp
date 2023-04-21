#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define NP cout << "-1" << endl
#define vector_input                   \
    vector<int> v(n);                  \
    for (int i = 0; i < v.size(); i++) \
    {                                  \
        cin >> v[i];                   \
    }
#define one_input \
    int n;        \
    cin >> n
#define two_input \
    int a, b;     \
    cin >> a >> b
#define three_input \
    int a, b, c;    \
    cin >> a >> b >> c
const int p = 1000000007;

void dfs(int i , int j , vector<vector<char>> &arr , vector<vector<int>> &vis , int n , int m)
{
    vis[i][j] = 1;
    vector<pair<int,int>> add = {{1,0},{-1,0},{0,1},{0,-1}};
    for (int k = 0; k < 4; k++)
    {
        int x = i + add[k].first;
        int y = j + add[k].second;
        if(x >= 0 && x < n && y >=0 && y <m && !vis[x][y] && arr[x][y] == '.')
            dfs(x , y , arr , vis , n , m);
    }
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m, '#'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j] && arr[i][j] == '.')
            {
                cnt++;
                dfs(i , j, arr, vis , n , m);
            }
        }
        
    }
    cout << cnt << endl;
    
    return 0;
}