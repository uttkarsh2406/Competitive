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
        ll a,s;
        cin>>a>>s;
        ll b,c;
        ll mot=INT_MIN,f=INT_MIN;
        for(int i=0;i<a;i++){
            cin>>b>>c;
            if(c>f){
                if(s>=b){
                    f=c;
                    mot=b;
                }
            }
        }
        cout<<f<<endl;
    }
    
}