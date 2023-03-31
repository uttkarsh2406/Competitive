#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /* code */
    ll n, k;
    ll mod = 1e9 + 7;
    cin >> n >> k;
    vector<int> v(n);
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll s = mp.size();
    k = min(k, s);
    vector<vector<int>> dp(s + 1, vector<int>(k + 1));
    v.clear();
    for (auto i : mp)
    {
        v.push_back(i.first);
    }
    for (int i = 0; i <= s; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= s; i++)
    {
        // cout << v[i - 1] << " ";
        for (int j = 1; j <= k; j++)
        {
            dp[i][j] = (dp[i - 1][j] + (mp[v[i - 1]] * dp[i - 1][j - 1]) % mod) % mod;
        }
    }
    int result = 0;
    // for (auto i : dp)
    // {

    //     for (auto j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i <= k; i++)
    {
        result += dp[s][i];
        result %= mod;
    }
    cout << result << endl;
}