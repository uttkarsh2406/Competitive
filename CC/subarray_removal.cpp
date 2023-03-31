#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a;
        cin>>a;
        vector<int>v(2);
        int temp;
        for(int i=0;i<a;i++){
            cin>>temp;

            if(temp==1){
                v[1]++;
            }
            else{
                v[0]++;
            }
        }
        int res=0;
        res+=min(v[0],v[1]);
        if(v[0]<v[1]){
            v[1]-=v[0];
            res+=v[1]/3;
        }
        cout<<res<<endl;
    }
    
}