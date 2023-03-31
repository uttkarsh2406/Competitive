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
        // cout<<n;
        ll count = 0;
        ll k=700;
        for(int i=1;i<=min(n,k);i++){
            if((n-i>0)){
                count+=floor(sqrt(n-i));
            }
        }
        
        cout << count << endl;
    }
}



