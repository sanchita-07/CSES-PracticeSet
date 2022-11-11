#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    ll sum = 0;
    for(ll i=0; i<n; i++){
        if(a[i+1]<a[i]){
            sum += a[i] - a[i+1];
            a[i+1]= a[i];
        }
    }
    cout<<sum;
    return 0;
    }