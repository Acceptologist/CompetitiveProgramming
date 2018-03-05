#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
int main() {
	fast;
	int n,m,c,d,w;
	while(cin>>n>>m&&n&&m) {
		vector<int>v(n);
		for(int i=0;i<n;i++)cin>>v[i];
		for(int i=0;i<m;i++) {
			cin>>c>>d>>w;
			v[c-1]-=w;
			v[d-1]+=w;
		}
		bool valid=true;
		for(int i=0;i<n;i++) {
			if(v[i]<0) {valid=false;break;}
		}
		if(valid)cout<<"S"<<endl;
		else cout<<"N"<<endl;
	}
}

