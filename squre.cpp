//https://codeforces.com/problemset/problem/1351/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
    pair<int,int>a,b;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;
    int mx = max(a.first,a.second);
    int mx1 = max(b.first,b.second);
    int mn= min(a.first,a.second);
    int mn1 = min(b.first,b.second);
    if(mx==mx1 && mn+mn1==mx) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}