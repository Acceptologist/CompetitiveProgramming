#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/************************************************************/

int main() {
	fast
int n;
	cin>>n;
	vector<int>v(n),fr(n+1);
	vector<vector<int> >a(n,vector<int>(n));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i!=j)
		v[i]=max(a[i][j],v[i]);
		v[j]=max(a[i][j],v[j]);
	}
	for(int i=0;i<n;i++){if(fr[v[i]]){v[i]=n;break;}fr[v[i]]++;}

	for(int i=0;i<n;i++)cout<<v[i]<<" ";

}
