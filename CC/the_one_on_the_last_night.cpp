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
        int count=0;
        priority_queue<int,vector<int>,greater<>>pq;
        while(a){
            pq.push(a%10);
            a/=10;
            count++;
        }
        while(b>0){
            int k=pq.top();
            pq.pop();
            
            if(k==9){
                break;
            }
            ll f=b/count;
            if(f==0){
                k+=1;
                b--;
            }
            else{
                if(k+f>9){
                    b-=(9-k);
                    k=9;
                }
                else{
                    k+=f;
                    b-=f;
                }
            }
            pq.push(k);
        }
        ll pro=1;
        while (!pq.empty())
        {
            /* code */
            pro*=pq.top();
            pq.pop();
        }
        cout<<pro<<endl;
        

    }
    
}