#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n==2 || n==3)
    cout<<"NO SOLUTION"<<endl;
    else if(n==4){
    cout<<"3 1 4 2"<<endl;
    }
    else{
    for(ll i=1; i<=n; i++){
        if(i%2!=0)
    cout<<i<<" ";
    }
     for(ll i=1; i<=n; i++){
        if(i%2==0)
    cout<<i<<" ";
    }
    }
    return 0;
}