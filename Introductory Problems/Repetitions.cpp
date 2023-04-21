#include <bits/stdc++.h>
using namespace std;

#define int long long int
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    string s;
    cin >> s;
    int cnt = 1, maxi = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            cnt = 1;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi << endl;

    return 0;
}