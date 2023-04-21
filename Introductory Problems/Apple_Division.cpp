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

void mini_diff(vector<int> &v, int i, int sum, int subset_sum, int &mini)
{
    if (i == v.size())
    {
        mini = min(mini, abs(sum - 2 * subset_sum));
        return;
    }
    mini_diff(v, i + 1, sum, subset_sum + v[i], mini);
    mini_diff(v, i + 1, sum, subset_sum, mini);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int mini = INT_MAX;
    mini_diff(v,0,sum,0,mini);
    cout << mini << endl;

    return 0;
}