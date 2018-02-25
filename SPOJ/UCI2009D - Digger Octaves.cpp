#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
vector<string>v;
vector<vector<string> >val;
vector<vector<int> >vis;
set<string>s;
void sol(int i,int j,int c,string va){
	if(c==8){
		sort(va.begin(),va.end());
		s.insert(va);
		return;
	}
	if(i==n||j==n||i<0||j<0||v[i][j]=='.'||vis[i][j])return;
vis[i][j]=1;
	sol(i,j+1,c+1,val[i][j]+va);
	sol(i,j-1,c+1,val[i][j]+va);
	sol(i+1,j,c+1,val[i][j]+va);
	sol(i-1,j,c+1,val[i][j]+va);
	vis[i][j]=0;
}
int main(){
	fast
int t;
	cin>>t;
	while(t--){
	s.clear();
	v.clear();
	vis.clear();
	val.clear();
	cin>>n;
	v.resize(n);
	val.resize(n,vector<string>(n));
	vis.resize(n,vector<int>(n));
	for(int i=0;i<n;i++)cin>>v[i];
	int e=0;
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(v[i][j]=='X')val[i][j]=char('0'+e++);
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(v[i][j]=='X')sol(i,j,0,"");
	cout<<s.size()<<endl;
	}
}

