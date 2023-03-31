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
          int a,b,c,d;
          cin>>a>>b;
          if (a>=b){
               c=a%b;
               cout<<"\n"<<c;
          }
          else
          {
              d=a%b;
          cout<<"\n"<<d;
              
          }
        
    }
    
}