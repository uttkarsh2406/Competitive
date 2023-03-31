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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c>a && d<=b){
            cout<<-1<<endl;
        }
        else{
            int res=0;
            int count=0;
            if(b>d){
                cout<<-1<<endl;
                continue;
            }
            if(d>b){
                count+=d-b;
                c-=(d-b);
                d=d-b;
            }
            res+=count;
            count=0;
            if(c>a){
                cout<<-1<<endl;
                continue;
            }
            if(a>c){
                count+=(a-c);
            }
            // cout<<count<<endl;
            res+=count;
            cout<<res<<endl;
        }



    }
    
}