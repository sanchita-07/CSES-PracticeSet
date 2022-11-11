#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<"\n";
    }
    else{
    deque<ll>a;
    a.push_back(n);
    for(ll i=1; i<n; i++){
        if(i%2!=0)
        a.push_front(i);
        else
        a.push_back(i);
    }
    for(auto i=a.begin(); i!=a.end(); i++){
        cout<<*i<<" ";
    }
    }
    return 0;
}