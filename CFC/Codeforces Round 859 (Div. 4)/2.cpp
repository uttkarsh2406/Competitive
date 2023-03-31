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
        int a;
        cin>>a;
        ll t;
        ll es=0,os=0;
        for(int i=0;i<a;i++){
            cin>>t;
            if(t&1){
                os+=t;
            }
            else{
                es+=t;
            }
        }
        if(es>os){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}