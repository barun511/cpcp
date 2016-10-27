#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	uint64_t b,d,s;
	cin>>b>>d>>s;
	uint64_t ans=0;
	if(b==d && d==s)
	{
		cout<<'0';
		return 0;
	}
	if(b>=d && b>=s)
	{
		uint64_t r = 0,t=0;
		if(d!=b)r=b -1 - d;
		if(s!=b)t=b-1-s;
		ans+=t;
		ans+=r;
	}
	else if(d>=b && d>=s)
	{
		uint64_t r=0,t=0;
		if(s!=d)r=d-1-s;
		if(b!=d)t=d-1-b;
		ans+=r;
		ans+=t;
	}
	else if(s>=d && s>=b)
	{
		uint64_t r=0,t=0;
		if(d!=s)r=s-1-d;
		if(b!=s)t=s-1-b;
		ans+=r;
		ans+=t;
	}
	cout<<ans;
	return 0;
}	
