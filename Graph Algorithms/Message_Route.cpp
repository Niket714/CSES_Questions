#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int k, l;
        cin >> k >> l;
        adj[k].push_back(l);
        adj[l].push_back(k);
    }
    vector<int> vis(n + 1, 0);
    vis[1] = -1;
    queue<pair<int, int>> q;
    q.push({1, -1});
    int flag = 0;
    while (!q.empty())
    {
        int x = q.front().first;
        q.pop();
        for (auto it : adj[x])
        {
            if (!vis[it])
            {
                vis[it] = x;
                if (it == n)
                {
                    flag = 1;
                    break;
                }
                q.push({it, x});
            }
        }
        if (flag)
            break;
    }
    if (flag == 0)
        cout << "IMPOSSIBLE" << endl;
    else
    {

        vector<int> res;
        int temp = n;
        while(temp != 1)
        {
            res.push_back(temp);
            temp = vis[temp];
        }
        res.push_back(1);

        cout << res.size() << endl;
        for (int i = res.size()-1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}