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
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    cout << s.size() << endl;
    
    return 0;
}