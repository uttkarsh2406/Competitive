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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        unordered_map<int, int> mp;
        unordered_map<int, vector<int>> mp1;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mp[a]++;
            mp1[a].push_back(i + 1);
        }
        bool flag = false;
        bool flag1 = false, flag2 = false;
        for (auto i : mp)
        {
            flag1 = false, flag2 = false;

            for (auto j : mp1[i.first])
            {
                if (mp1.count(j) && !flag1)
                {
                    flag1 = true;
                }
                else if (mp1.count(j) && !flag2)
                {
                    // cout << i.first << " " << j << endl;
                    flag2 = true;
                    break;
                }
            }
            if (flag1 && flag2)
            {
                break;
            }
        }
        if (flag1 && flag2)
        {
            cout << "Truly Happy" << endl;
        }
        else
        {
            cout << "Poor Chef" << endl;
        }
    }
}