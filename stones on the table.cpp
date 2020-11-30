#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    string s;
    cin>>s;
    ll i=0,j=i+1,cnt=0;
    while(i<j && j<s.size())
    {
        if(s[i]==s[j])
        {
            cnt++;
            j++;
        }
        else
        {
            i=j;
            j++;
        }
    }
    cout<<cnt;
}
