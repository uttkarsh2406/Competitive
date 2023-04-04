#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /* code */
    ll n, t;
    cin >> n >> t;
    unordered_map<string, pair<string, int>> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = {b, 0};
    }
    unordered_map<string, int> mp2;
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        mp[a].second++;
        mp2[mp[a].first]++;
    }
    string country;
    ll m = INT_MIN;
    for (auto i : mp2)
    {
        if (i.second > m)
        {
            m = i.second;
            country = i.first;
        }
        else if (i.second == m)
        {
            if (i.first < country)
            {
                country = i.first;
            }
        }
    }
    cout << country << endl;
    m = INT_MIN;
    country = "";
    for (auto i : mp)
    {
        if (i.second.second > m)
        {
            m = i.second.second;
            country = i.first;
        }
        else if (i.second.second == m)
        {
            if (i.first < country)
            {
                country = i.first;
            }
        }
    }
    cout << country << endl;
}