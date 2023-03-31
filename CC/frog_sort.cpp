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
        ll n;
        cin>>n;
        ll res=0;
        vector<int>a(n+1),b(n+1),c(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]=i;
        }
        for(int i=0;i<n;i++){
            cin>>b[a[i]];
        }
        ll push=0;
        if(c[2]<c[1]){
            push=ceil(float(c[1]-c[2]+1)/b[2]);
            res+=push;
            c[2]+=push*b[2];
        }
        if(n>2){
            push=ceil(float(c[2]-c[3]+1)/b[3]);
            res+=push;
            c[3]+=push*b[3];
        }
        if(n>3){
            push=ceil(float(c[3]-c[4]+1)/b[4]);
            res+=push;
            c[4]+=push*b[4];
        }
        cout<<res<<endl;

    }
    
}