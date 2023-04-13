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
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n, m;
        cin >> n >> m;
        if(n==1 || m==1){
            cout<<max(n,m)-1<<endl;
            continue;
        }
        cout<<((2*((n-1)*(m-1)))+(m+n-2))<<endl;
    }
}