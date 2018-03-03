#include<bits/stdc++.h>
using namespace std;
#define ll long long
void fast(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
int main(){
    fast();
 int n,q,x,y;
 cin>>n;
 vector<int>v(n);
 vector<int>v2(n+5);
 for(int i=0;i<n;i++)cin>>v[i];
 cin>>q;
 for(int i=0;i<q;i++){
    cin>>x>>y;
    v2[x-1]-=1;
    v2[y]+=1;
 }
 int e=0,ans=0,w;
 for(int i=0;i<n;i++){
    e+=v2[i];
    //cout<<e<<endl;
    if(e==0)++ans;
 }
 cout<<ans<<endl;
 e=0,w=0;
 for(int i=0;i<n;i++){
    e+=v2[i];
    if(e==0){++w;
    if(w==1)
    cout<<v[i];
    else cout<<" "<<v[i];
    }
 }
  }
