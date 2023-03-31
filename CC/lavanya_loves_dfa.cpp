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
        string q;
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                flag=true;
                break;
            }
            else{
                q=q+s[i];
            }
        }
        if(q=="000" && flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
}