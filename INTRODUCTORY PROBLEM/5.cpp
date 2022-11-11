#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0; i<n; i++)
        cin>>a[i];
        ll max = 0, sec = 0, index1, index2;
        for(ll i = 0; i<n; i++){
            if(a[i]>max){
                sec = max;
                max = a[i];
                index1 = i;
            }
            else if(a[i]>sec && a[i]!= max){
                sec = a[i];
                index2 = i;
            }
        }
        if(index1<index2){
        if((max - sec)<((max - sec)%m))
        cout<<max + sec + (max - sec)%m<<endl;
        else
        cout<<2*max<<endl;
       
    }
    else if(index1>index2){
        if((max - sec)<(((sec - max)%m)+m))
         cout<<max + sec + ((sec - max)%m)+m<<endl;
         else
         cout<<2*max<<endl;
      
    }
    
    }
    return 0;
}