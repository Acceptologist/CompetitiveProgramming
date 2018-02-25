#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
	fast
	vector<ll>v(100001);
	v[1]=1;
	string s="1",x;
	for(ll i=2;i<100000;i++){
		if(i%10==i)v[i]=v[i-1]+1;
		else if(i%100==i)v[i]=v[i-1]+2;
		else if(i%1000==i)v[i]=v[i-1]+3;
		else if(i%10000==i)v[i]=v[i-1]+4;
		else if(i%100000==i)v[i]=v[i-1]+5;
		stringstream in;
		in<<i;
		in>>x;
		s+=x;
	}
	for(ll i=2;i<100000;i++){v[i]+=v[i-1];}
	ll t,n,a;
	cin>>t;
	while(t--){
		cin>>n;
		for(ll i=0;i<100000;i++){
			if(v[i]>=n){a=i;break;}
		}
		n-=v[a-1];
		cout<<s[n-1]<<endl;
	}

}

