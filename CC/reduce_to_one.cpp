#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll mod = 1e9 + 7;
    ll i = 2;
    vector<long long> v(1000001);
    v[0] = 1;v[1]=1;
    while (i < 1000000)
    {
        v[i] = (((v[i - 1] + i) % mod) + ((v[i - 1] * i) % mod)) % mod;
        i++;
    }
    for(int i=0;i<100;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        cout<<v[n]<<endl;
    }
}