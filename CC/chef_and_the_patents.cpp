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
        ll n,m,x,k;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;
        if(x*m<n){
            cout<<"no"<<endl;
            continue;
        }
        ll ce=0,co=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                ce++;
            }
            else{
                co++;
            }
        }
        for(int i=1;i<=m;i++){
            if(n<=0 || (ce==0 && co==0)){
                break;
            }

            if(i&1){
                if(co-x>=0){
                    n-=x;
                    co-=x;
                }
                else{
                    n-=co;
                    co=0;
                }
            }
            else{
                if(ce-x>=0){
                    n-=x;
                    ce-=x;
                }
                else{
                    n-=ce;
                    ce=0;
                }
            }

        }
        cout<<(n<=0 ?"yes":"no")<<endl;
    }
    
}