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
	while(cin>>n &&n) {
		if(n==1) {
			cout << "Discarded cards:"<<endl;
			cout << "Remaining card: 1"<<endl;
			continue;
		}
		deque<int>dq(n),ans(n-1);
		for(int i=1;i<=n;i++)dq[i-1]=i;
		int index=0;
		while(dq.size()>1) {
			ans[index++]=dq[0];
			dq.pop_front();
			dq.push_back(dq[0]);
			dq.pop_front();
		}
		cout << "Discarded cards: ";
		for(int i=0;i<ans.size();i++) {
			if(i)cout<<", "<<ans[i];
			else cout<<ans[i];
		}
		cout<<endl;
		cout<<"Remaining card: "<<dq[0]<<endl;
	}
}

