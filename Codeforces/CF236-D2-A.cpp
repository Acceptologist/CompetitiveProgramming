#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<list>
using namespace std;
int main(){
string s;cin>>s;
list<char>l;
for(int i=0;i<s.size();i++){
	l.push_back(s[i]);
}
l.sort();
l.unique();
if((l.size()%2)==0)cout<<"CHAT WITH HER!"<<endl;
else cout<<"IGNORE HIM!"<<endl;
}
