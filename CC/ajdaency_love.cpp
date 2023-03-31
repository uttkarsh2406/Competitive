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
        vector<int> a, b;
        ll t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t & 1)
            {
                a.push_back(t);
            }
            else
            {
                b.push_back(t);
            }
        }
        if (a.size() >= 2)
        {
            ll f = a.size() - 1;
            if ((f & 1))
            {

                for (auto i : a)
                {
                    cout << i << " ";
                }
                for (auto i : b)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
            else if((!(f & 1) && b.size() >=1)){
                
                for(int i=0;i<a.size()-1;i++){
                    cout<<a[i]<<" ";
                }
                for(auto i:b){
                    cout<<i<<" ";
                }
                cout<<a[f]<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}