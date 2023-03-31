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
        ll n, c, l;
        cin >> n >> c >> l;
        if(n==0){
            cout<<c<<endl;
            continue;
        }
        int le=c%(n+l-1);
        if(le>=l){
            le=0;
        }
        cout<<le<<endl;
    }
}