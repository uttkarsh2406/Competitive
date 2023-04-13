#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0, j = n - 1;
        ll count = 0;
        while (i <= j)
        {
            // if (i == j && v[i] != v[n - i - 1])
            // {
            //     ll x = v[i] / 2;
            //     v[i] = x;
            //     v.insert(v.begin() + i+1, x);
            //     i++;
            //     j--;
            //     continue;
            // }
            if (v[i] == v[j])
            {
                i++;
                j--;
            }
            else
            {
                if (v[i] > v[j])
                {
                    ll x = v[j];
                    ll y = v[i] - v[j];
                    v[i] = x;
                    v.insert(begin(v) + i+1, y);
                    i++;
                    count++;
                }
                else if (v[j] > v[i])
                {
                    ll x = v[i];
                    ll y = v[j] - v[i];
                    v[j] = x;
                    v.insert(begin(v) + j, y);
                    i++;
                    count++;
                }
            }
            for (auto i : v)
            {
                cout << i << " ";
            }
            cout<<endl;
        }
        // cout << endl;
        cout << count << endl;
    }
}

