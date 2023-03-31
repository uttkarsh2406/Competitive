#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        vector<int> v(n);
        bool flag = false, flag2 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = INT_MAX;
        int i = 0, j = n - 1;
        int mx = INT_MIN;
        while (i < j)
        {
            if (v[i] > v[j])
            {
                cout << -1 << endl;
                flag = true;
                break;
            }
            int f = v[j] - v[i];
            if (f > count)
            {
                cout << -1 << endl;
                flag = true;
                break;
            }
            else
            {
                if (!flag2)
                {
                    mx = f;
                    flag2=true;
                }
                else
                {
                    count = max(count, f);
                }
                count = f;
            }
            i++;
            j--;
        }
        if (!flag)
        {
            if(mx==INT_MIN){
                cout<<0<<endl;
            }
            else
            cout<<mx<<endl;
        }
    }
}