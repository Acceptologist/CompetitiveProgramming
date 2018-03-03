#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/
int a[100055];
int main() {
	fast;
	int n,m,x;
	cin>>n>>m;
	vector<int>v(n);
	vector<int>s(1+n);
	for(int i=0;i<n;i++)cin>>v[i];
	for(int i=n-1;i>=0;i--){
		if(!a[v[i]]){a[v[i]]=1;s[i]=1;}
	}
	for(int i=n-1;i>=0;i--){s[i]+=s[i+1];}
	for(int i=0;i<m;i++){
		cin>>x;
		cout<<s[x-1]<<endl;
	}
}

