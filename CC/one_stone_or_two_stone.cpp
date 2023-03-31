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
        ll a,b;
        cin>>a>>b;
        if(a==b){
            if(a&1){
                cout<<"CHEF"<<endl;
            }
            else{
            cout<<"CHEFINA"<<endl;
            }
        }
        else if(a-b==1){
            if(a&1){
                cout<<"CHEFINA"<<endl;
            }
            else{
                cout<<"CHEF"<<endl;
            }
        }
        else if(b-a==1){
            if(a&1){
                cout<<"CHEF"<<endl;
            }
            else{
                cout<<"CHEFINA"<<endl;
            }   
        }
        else if(a>b){
            cout<<"CHEF"<<endl;
        }
        else{
            cout<<"CHEFINA"<<endl;
        }
    }
    return 0;
    
}