#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=b && a<=c){
            cout<<"Take second dose now"<<endl;
        }
        else if(a<b){
            cout<<"Too Early"<<endl;
        }
        else if(a>c){
            cout<<"Too Late"<<endl; 
        }

    }
    
}