#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    ll int max = 1, count = 1, i;
    for(i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            count++;
        }
         else
        count = 1;
        if(count>max){
        max = count;
        }
    }
    cout<<max;
    return 0;
}