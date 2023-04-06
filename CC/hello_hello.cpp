#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
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
        long double pm,tt,n;
        cin>>pm>>tt>>n;
        ld res=-1,mx=tt*pm;
        for(int i=0;i<n;i++){
            ld a,b,c;
            cin>>a>>b>>c;
            ld cpm=c/a;
            ld tcpm=(b*tt)+cpm;
            if(mx>tcpm){
                mx=tcpm;
                res=i;
            }
        }
        if(res==-1){
            cout<<0<<endl;
            continue;
        }
        else {
            cout<<res+1<<endl;
            continue;
        }
    }
    
}