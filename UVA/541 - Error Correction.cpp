#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl "\n"
/************************************************************/
int main() {
	fast;
	int n;
	while(cin>>n && n) {
		vector<vector<int> >v(n,vector<int>(n));
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++)
			cin>>v[i][j];
		}
		int c,sc=0,sr=0,ic,ir;
		for(int i=0;i<n;i++) {
			c=0;
			for(int j=0;j<n;j++) {
				if(v[i][j])++c;
			}
			if(c&1) {++sr;ir=i;}
		}
		for(int i=0;i<n;i++) {
			c=0;
			for(int j=0;j<n;j++) {
				if(v[j][i])++c;
			}
			if(c&1) {++sc;ic=i;}
		}
		if(!sc&&!sr)cout<<"OK"<<endl;
		else if(sc==1&&sr==1)cout<<"Change bit ("<<ir+1<<","<<ic+1<<")"<<endl;
		else cout<<"Corrupt"<<endl;
	}
}

