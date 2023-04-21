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
const int p = 1000000007;

bool if_possible(int row, int col, vector<int> &column, vector<int> &posi_diag, vector<int> &nega_diag)
{
    if (posi_diag[row + col] == 1)
        return false;
    if (nega_diag[7 + col - row] == 1)
        return false;
    if (column[col] == 1)
        return false;

    return true;
}

void solve(int row, vector<vector<char>> &v, int &ans, vector<int> &column, vector<int> &posi_diag, vector<int> &nega_diag)
{
    if (row == 8)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        if (v[row][i] == '.' && if_possible(row, i, column, posi_diag, nega_diag))
        {
            posi_diag[row + i] = 1;
            nega_diag[7 + i - row] = 1;
            column[i] = 1;
            solve(row + 1, v, ans, column ,posi_diag, nega_diag);
            posi_diag[row + i] = 0;
            nega_diag[7 + i - row] = 0;
            column[i] = 0;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    vector<vector<char>> v(8, vector<char>(8, '.'));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char ch;
            cin >> ch;
            v[i][j] = ch;
        }
    }
    int ans = 0;
    vector<int> column(8, 0), posi_diag(15, 0), nega_diag(15, 0);
    solve(0, v, ans, column, posi_diag, nega_diag);
    cout << ans << endl;

    return 0;
}