#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;cin>>s;
    unordered_map<char,ll>mp;
    for(ll i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    ll cnt=0;
    for(auto i: mp)
    {
       cnt++;
    }
    if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

}
