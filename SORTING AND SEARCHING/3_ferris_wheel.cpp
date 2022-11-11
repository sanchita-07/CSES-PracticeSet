#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll i, n, x;
    cin>>n>>x;
    ll a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k = 0;
    for(i=n-1; i!=0; i--){
        if(a[i]+a[k]<=x){
        k++;
        }
    }
    if(i==k)
    cout<<n-k+1<<endl;
    else
    cout<<n-k<<endl;
    return 0;
}