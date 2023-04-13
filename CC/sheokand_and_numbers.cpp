#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main()
{
    vector<ll>v;
    set<ll>s;
    for(ll i=0;i<=30;i++){
        for(ll j=0;j<=30;j++){
            if(j!=i){
                ll k=pow(2LL,i)+pow(2LL,j);
                s.insert(k);
            }
        }
    }
    for(auto i:s){
        v.push_back(i);
    }
    sort(v.begin(),v.end());
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // for(int i=0;i<100;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    ll tt;
    cin >> tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin >> n;
        int pos1=lower_bound(begin(v),end(v),n)-begin(v);
        int pos2=upper_bound(begin(v),end(v),n)-begin(v);
        pos2--;
        cout<<min(abs(n-v[pos1]),abs(n-v[pos2]))<<endl;

    }
}