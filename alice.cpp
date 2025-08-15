#include<bits/stdc++.h>//https://codeforces.com/problemset/problem/2028/A
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
       int n,a,b;
       cin>>n;
       
       pair<int,int>p1,p={0,0};
       cin>>p1.first>>p1.second;
       string s1;cin>>s1;
        if(p==p1) {
            cout<<"YES\n";
            continue;
        }
        string ans="NO";
        for(int i=0; i<100; i++){ 
       for(auto s:s1){
        
        if(s=='N')p.second++;
        else if(s=='E') p.first++;
        else  if(s=='S') p.second--;
        else p.first --;
        if(p1==p){
        
        ans="YES";
        
       }
       }
       
    }
    cout<<ans<<endl;

    }
    return 0;
}