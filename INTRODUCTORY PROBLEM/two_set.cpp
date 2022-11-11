#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    if(((n*(n+1))/4)==0){
    cout<<"YES"<<"\n";
    if(n%4==0){
    cout<<n/2<<"\n"; 
    // cout<<ceil((float)n/2)<<"\n";
    for(int i=0; i<n/2; i+=2){
    cout<<i+1<<" "<<n-i<<" ";
    }
    cout<<n/2<<"\n";
    for(int i=n/4; i<3*(n/4); i++){ 
    cout<<i+1<<" ";
    }
    }
    else{
    cout<<n/2+1<<"\n";
     for(int i=0; i<n/4; i+=2){
        cout<<n/2 +1<<" ";
    cout<<i+1<<" "<<n-i<<" ";
    cout<<i++<<" ";
    }
    cout<<n/2<<"\n";
    }
    }
    else
    cout<<"NO";
    return 0;
}