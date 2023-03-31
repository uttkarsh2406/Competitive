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
        int c0=0,c1=0,f;
        for(int i=0;i<a;i++){
            cin>>f;
            if(f==0)c0++;
            if(f==1)c1++;
        }
        if(c0<=a/2+a%2){
            cout<<0<<endl;
        }
        else if(c0+c1==a && c1!=0){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }


    }
    
}