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
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        string s;
        cin >> s;
        int n = s.size();
        if (n == 2 && s[0] != s[1])
        {
            cout << "yes" << endl;
            continue;
        }
        else if (n == 2 && s[0] == s[1])
        {
            cout << "no" << endl;
            continue;
        }
        int count = 0;
        int cr = 0, cg = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            (s[i] == 'R') ? cr++ : cg++;
        }
        (s[n - 1] == 'R') ? cr++ : cg++;
        if (s[n - 1] == s[0])
        {
            count++;
        }
        if (cr != cg || count > 2)
        {
            cout << "no" << endl;
            continue;
        }
        cout << "yes" << endl;
    }
}