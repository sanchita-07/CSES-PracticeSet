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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count =0;
        for(int i=0; i<n; i++){
            if(a[i]>=1000){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}