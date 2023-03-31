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
        string s;
        cin>>s;
        ll a;
        cin>>a;
        ll tp=12*a;
        vector<int>v(2);
        for(int i=0;i<s.size();i++){
            if(s[i]=='T'){
                v[0]++;
            }
            else{
                v[1]++;
            }
        }
        ll td=2*v[0]+v[1];
        // cout<<td<<" "<<tp<<endl;
        if(1+td>tp){
            cout<<0<<endl;
            continue;
        }
        ll count=0;
        ll q=tp-1;
        for(int i=1;i<tp;i++){
            if(i+td>tp){
                break;
            }
            ll z=(q/td);
            if(z==0){
                break;
            }
            count+=z;
            q--;
        }
        cout<<count<<endl;

    }
    
}