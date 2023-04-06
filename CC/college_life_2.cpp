#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll tt;
    cin>>tt;
    while (tt--)
    {
        /* code */
        ll s;
        cin>>s;
        ll res=0;
        vector<ll>introSong(s);
        for(int i=0;i<s;i++){
            cin>>introSong[i];
        }
        for(int i=0;i<s;i++){
            ll ecount;
            cin>>ecount;
            ll eplen;
            for(int j=0;j<ecount;j++){
                cin>>eplen;
                res+=eplen;
            }
            res-=(ecount-1)*introSong[i];
        }

        cout<<res<<endl;

    }
    
}