#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll sum, ll sub, ll pro, ll div)
{
    ll a = (sum + sub) / 2;
    ll b = (sum - sub) / 2;

    if (a < 1 || a > 10000)
    {
        return false;
    }
    if (b < 1 || b > 10000)
    {
        return false;
    }

    if (a + b != sum)
        return false;
    if (a - b != sub)
        return false;
    if (a * b != pro)
        return false;
    if (b != 0 && a / b != div)
        return false;
    return true;
}

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
        vector<ll> v(4), temp(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }
        temp[0] = 0;
        temp[1] = 1;
        temp[2] = 2;
        temp[3] = 3;
        pair<ll, ll> res = {-1, -1};
        do
        {
            if (check(v[temp[0]], v[temp[1]], v[temp[2]], v[temp[3]]))
            {

                res.first = (v[temp[0]] + v[temp[1]]) / 2;
                res.second = (v[temp[0]] - v[temp[1]]) / 2;

                break;
            }
        } while (next_permutation(temp.begin(), temp.end()));
        cout << res.first << " " << res.second << endl;
    }
}