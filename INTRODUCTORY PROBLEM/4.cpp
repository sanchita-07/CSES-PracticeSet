#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int t = w + y*z;
        if(t<x)
        cout<<"unfilled"<<"\n";
        else if(t==x)
        cout<<"filled"<<"\n";
        else if(t>x)
        cout<<"overflow"<<"\n";
    }
    return 0;
}