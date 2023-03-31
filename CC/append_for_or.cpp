#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        int orsum=0;
        for(int i=0;i<a;i++){
            int t;
            cin>>t;
            orsum|=t;
        }
        if((orsum|b)!=b){
            cout<<-1<<endl;
        }
        else{
            cout<<(b^orsum)<<endl;
        }
    }
    return 0;
}

