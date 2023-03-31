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
        ll r, g, bq, m;
        cin >> r >> g >> bq >> m;
        priority_queue<int> tr, tg, tb;
        ll t;
        for (int i = 0; i < r; i++)
        {
            cin >> t;
            tr.push(t);
        }
        for (int i = 0; i < g; i++)
        {
            cin >> t;
            tg.push(t);
        }
        for (int i = 0; i < bq; i++)
        {
            cin >> t;
            tb.push(t);
        }
        priority_queue<int>pq;

        pq.push(tr.top());
        pq.push(tb.top());
        pq.push(tg.top());
        while(m--){
            ll s=pq.top();
            pq.pop();
            pq.push(s/2);
        }
        cout<<pq.top()<<endl;


        // bool flag = false;
        // while (m--)
        // {
        //     /* code */
        //     ll mx = INT_MIN;
        //     ll a = tr.top();
        //     ll b = tg.top();
        //     ll c = tb.top();
        //     if (a == b && b == c && c == 0)
        //     {
        //         flag = true;
        //         cout << 0 << endl;
        //         break;
        //     }
        //     if (a >= b && a >= c)
        //     {
        //         tr.pop();
        //         tr.push(a / 2);
        //     }
        //     else if (b >= c && b >= a)
        //     {
        //         tg.pop();
        //         tg.push(b / 2);
        //     }   
        //     else if (c >= a && c >= b)
        //     {
        //         tb.pop();
        //         tb.push(c / 2);
        //     }
        // }
        // if (flag)
        // {
        //     continue;
        // }
        // ll u = tr.top();
        // ll i = tg.top();
        // ll o = tb.top();
        // if (u >= i && u >= o)
        // {
        //     cout<<u<<endl;
        // }
        // else if (i >= o && i >= u)
        // {
        //     cout<<i<<endl;
        // }
        // else if (o >= u && o >= i)
        // {
        //     cout<<o<<endl;
        // }
    }
}