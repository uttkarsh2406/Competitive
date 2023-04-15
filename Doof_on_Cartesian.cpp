#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll q;
        cin>>q;
        while (q--)
        {
            /* code */
            ll a,b;
            cin>>a>>b;
            ll t=a+b;
            ll m=min(a,b);
            int lb=lower_bound(begin(v),end(v),t)-begin(v);
            if(lb>=n){
                cout<<n<<endl;
            }
            else if(t==v[lb]){
                cout<<-1<<endl;
            }
            else if(v[lb]==t){
                cout<<lb+1<<endl;
            }
            else if(v[lb]>t){
                cout<<lb<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        

    }
    
}