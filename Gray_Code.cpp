#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define tc int t; cin >> t; while(t--) 
#define Y cout<<"YES" << endl 
#define N cout<<"NO" << endl
#define NP cout<<"-1" << endl
const int p = 1000000007;
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n;
    cin >> n;
    int num = 0;
    while(num < (int)pow(2,n))
    {
        string s = bitset<64>(num).to_string();
        string g = "";
        g+= s[64-n];
        for (int i = 64 - n+1; i < s.length(); i++)
        {
            g += ((s[i]-'0')^(s[i-1]-'0')) + '0';
        }
        for (int i = 0 ; i < g.length(); i++)
        {
            cout << g[i];
        }
        cout << endl;

        num++;
    }
    
    return 0;
}