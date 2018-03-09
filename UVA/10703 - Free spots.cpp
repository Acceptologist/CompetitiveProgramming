#include<bits/stdc++.h>
using namespace std;

/************************************************************/
#define ll long long
#define f first
#define se second
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  endl "\n"
/************************************************************/
int a[505][505];
int main() {
	fast;
	int w,h,n,x1,x2,y2,y1,mxx,mnx,mxy,mny,ans;
	while(cin>>w>>h>>n &&w&&h) {
		memset(a,0,sizeof(a));
		while(n--) {
			cin>>x1>>y1>>x2>>y2;
			mxx=max(x1,x2);
			mny=min(y1,y2);
			mnx=min(x1,x2);
			mxy=max(y1,y2);
			for(int i=mnx;i<=mxx;i++) {
				for(int j=mny;j<=mxy;j++) {
					a[i][j]=1;
				}
			}
		}
		ans=0;
		for(int i=1;i<=w;i++) {
			for(int j=1;j<=h;j++) {
				if(!a[i][j])++ans;
			}}
		if(!ans)cout<<"There is no empty spots."<<endl;
		else if(ans==1)cout<<"There is one empty spot."<<endl;
		else cout<<"There are "<<ans<<" empty spots."<<endl;

	}
}

