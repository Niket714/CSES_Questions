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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    int flag = 1, cnt = 0;
    char ch;
    string ans = "";
    for (auto &it : m)
    {
        if (it.second % 2 == 1)
        {
            cnt++;
            if (cnt > 1)
            {
                flag = 0;
                break;
            }
            ch = it.first;
            it.second--;
        }
    }
    if (flag == 0)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (auto it : m)
        {
            for (int i = 0; i < it.second / 2; i++)
            {
                ans += it.first;
            }
        }
        cout << ans;
        if (cnt == 1)
            cout << ch;
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}