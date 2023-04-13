#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007

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
        string a,b;
        cin>>a>>b;
        ll c0=0,c1=0,d0=0,d1=0;
        for(int i=0;i<a.size();i++){
            if(a[i]=='0'){
                c0++;
                if(b[i]=='1'){
                    d0++;
                }
            }
            else if(a[i]=='1'){
                c1++;
                if(b[i]=='0'){
                    d1++;
                }
            }
        }
        if(c0==0 || c1==0){
            cout<<"Unlucky Chef"<<endl;
            continue;
        }
        else{
            cout<<"Lucky Chef"<<endl;
            cout<<max(d0,d1)<<endl;

        }



    }
    
}