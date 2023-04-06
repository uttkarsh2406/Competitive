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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(4);
    s.insert(9);
    vector<ll> v;
    ll idx = 0;
    for (ll i = 1; i <= 100000; i++)
    {
        ll num = i * i;
        bool flag = true;
        while (num)
        {
            ll temp = num % 10;
            if (!s.count(temp))
            {
                flag = false;
                break;
            }
            num /= 10;
        }
        if (flag)
        {
            v.push_back(i * i);
        }
    }
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll a, b;
        cin >> a >> b;
        int bpos = lower_bound(begin(v), end(v), b) - begin(v);
        int apos = lower_bound(begin(v), end(v), a) - begin(v);
        ll total = bpos - apos;
        if (v[bpos] == b)
        {
            total++;
        }

        cout << total << endl;
    }
}