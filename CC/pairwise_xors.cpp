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
        ll n;
        cin >> n;
        bool flag=false;
        if (n & 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i < 30; i++)
        {
            if (((1 << i) & (n / 2)) && (n / 2 != 1 << i))
            {
                cout << (n / 2) << " " << (1 << i) << " " << 0 << endl; // cout<<S<<" "<<S'<<" "<<0<<nline;
               flag=true;
                break;;
            }
        }
        if(!flag)
        cout<<-1<<endl;
    }
}