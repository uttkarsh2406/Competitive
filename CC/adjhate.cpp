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
        vector<int>a,b;
        int c;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c&1){
                b.push_back(c);
            }
            else{
                a.push_back(c);
            }
        }
        int as=a.size(),bs=b.size();
        if((as==n) || (bs==n)){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<as;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<bs;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;



    }
    
}