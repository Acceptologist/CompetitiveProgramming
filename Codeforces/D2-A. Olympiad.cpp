#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
	fast
int n,x,z=0;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
		if(x==0)z=1;
	}
	if(z)cout<<s.size()-1<<endl;
	else cout<<s.size()<<endl;

}
