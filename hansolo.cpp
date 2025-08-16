//https://codeforces.com/problemset/problem/514/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
       int n,a,b;
       cin>>n>>a>>b;
       set<pair<int,int>>s;
       for(int i=0; i<n;  i++){
        int x,y;
        cin>>x>>y;
        x-=a;
        y-=b;
        int g=__gcd(x,y);
        s.insert({y/g,x/g});
       }
       cout<<s.size()<<endl;
    return 0;
}