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
	string x,y;
	cin>>x>>y;
	int ans=0;
	for(int i=0;i<x.size();i++){
		if(tolower(x[i])>tolower(y[i])){ans=1;break;}
		else if(tolower(x[i])<tolower(y[i])){ans=-1;break;}
	}
	cout<<ans<<endl;
}
