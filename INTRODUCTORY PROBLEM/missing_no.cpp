#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin>>n;
    ll int a[n];
    for(ll int i=0; i<n-1; i++){
        cin>>a[i];
    }
    sort(a,a+n-1);
    //   for(ll int i=0; i<n-1; i++){
        
    //     // cout<<i<<" "<<a[i]<<" ";
    //     cout<<a[i]<<" ";
        
    // }
    for(ll int i=0; i<n; i++){
        if((i+1)!=a[i]){
        cout<<i+1;
        break;
        }
    }
    return 0;
}