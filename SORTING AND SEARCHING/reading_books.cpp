#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll i,n;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    ll maxm = *max_element(a,a+n);
    ll i_sum = 0;
    ll sum = accumulate(a,a+n,i_sum);
    cout<<max(maxm*2,sum)<<endl;
     return 0;
}