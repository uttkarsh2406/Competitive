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
        ll n;
        cin>>n;
        string inp;
        cin>>inp;
        unordered_set<char>s1,s2;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(i&1){
                if(s2.count(inp[i])){
                    cout<<"NO"<<endl;
                    flag=true;
                    break;
                }
                s1.insert(inp[i]);
            }
            else{
                if(s1.count(inp[i])){
                    cout<<"NO"<<endl;
                    flag=true;
                    break;
                }
                s2.insert(inp[i]);
            }
        }
        if(!flag){
            cout<<"YES"<<endl;
        }

    }
    
}