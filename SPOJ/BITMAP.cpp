#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool valid(pair<int,int>p,int n,int m){
	if(p.f<0||p.se<0||p.f==n||p.se==m)return 0;
	return 1;
}
int main(){
	fast
int t;
	cin>>t;
	while(t--){
	 int n,m;
	 cin>>n>>m;
	 vector<string>s(n);
	 for(int i=0;i<n;i++){
		 cin>>s[i];
	 }
	 vector<vector<int> >vis(n,vector<int>(m,-1));
	 queue<pair<int,int> >q;
	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 if(s[i][j]=='1'){q.push({i,j});vis[i][j]=0;}
		 }
	 }
	 while(!q.empty()){
		 pair<int,int>a,up,dw,r,l;
		 a=q.front();q.pop();
		 up={a.f-1,a.se};
		 dw={a.f+1,a.se};
		 r={a.f,a.se+1};
		 l={a.f,a.se-1};
		 if(valid(up,n,m)&&vis[up.f][up.se]==-1){q.push(up);vis[up.f][up.se]=vis[a.f][a.se]+1;}
		 if(valid(dw,n,m)&&vis[dw.f][dw.se]==-1){q.push(dw);vis[dw.f][dw.se]=vis[a.f][a.se]+1;}
		 if(valid(r,n,m)&&vis[r.f][r.se]==-1){q.push(r);vis[r.f][r.se]=vis[a.f][a.se]+1;}
		 if(valid(l,n,m)&&vis[l.f][l.se]==-1){q.push(l);vis[l.f][l.se]=vis[a.f][a.se]+1;}
	 }
	 for(int i=0;i<n;i++){
			 for(int j=0;j<m;j++){
				if(j)cout<<" "<<vis[i][j];
				else cout<<vis[i][j];
			 }
			 cout<<endl;
	 }
	}
}

