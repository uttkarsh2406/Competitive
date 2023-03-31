#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        int n;
        cin>>n;
        ll sum=0,ce1=0,co2=0,co1=0,ce2=0;
        unordered_map<int,vector<ll>>mp1,mp2;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            sum+=t;
            if(t&1)co1++;
            else ce1++;
        }
        int res=0;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            sum+=t;
            if(t&1)co2++;
            else ce2++;
            
            
        }
        ll tm=n-(min(ce1,ce2)+min(co1,co2));
        cout<<((sum-tm)/2)<<endl;

    }
    
}