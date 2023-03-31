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
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag1=true;
        while(0<n){
            if(n&1){
                n--;
            }
            else{
                int mid=n/2;
                for(int i=0;i<mid;i++){
                    if(s[i]!=s[mid+i]){
                        flag1=false;
                        break;
                    }
                }
                n=mid;
                if(!flag1){
                    break;
                }
            }
        }
        if(!flag1){
            cout<<"NO"<<endl;
        }
        if(flag1 && n==0){
            cout<<"YES"<<endl;
        }
    }
    
    
}