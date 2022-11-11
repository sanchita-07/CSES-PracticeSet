#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c;
        cin>>r>>c;
        if(r>=c && r%2==0)
        cout<< r*r - c + 1<<"\n";
        else if(r>=c && r%2!=0)
        cout<< (r-1)*(r-1) + c<< "\n";
        else if(c > r && c%2==0)
        cout<< (c-1)*(c-1) + r<<"\n";
        else if(c>r && c%2!=0)
        cout<<c*c - r + 1<< "\n";

    }
    return 0;
}   