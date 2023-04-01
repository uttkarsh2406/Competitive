#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
    vector<bool> prime(10001, true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> s;
    for (int i = 2; i < 10001; i++)
    {
        if (prime[i] == true)
        {
            s.push_back(i);
            for (int j = i * i; j <= 10001; j += i)
            {
                prime[j] = false;
            }
        }
    }
    vector<int> a(10001);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] + 2 * s[j] > 10000)
            {
                break;
            }
            a[s[i] + 2 * s[j]]++;
        }
    }
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        cout<<a[n]<<endl;
    }
}