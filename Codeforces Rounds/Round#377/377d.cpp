#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> prep;
vector<int> v;
bool possible(int r)
{
	map<int, int> m;
	for(int i=0;i<=r;i++)
	{
		if(v[i]!=0)
		{
			m[v[i]]=i;
		}
	}
	map<int,int> m2;
	for(auto it:m)
	{
		m2[it.second]=it.first;
	}
	int prev=0,days=0;
	if(m.size()<prep.size())return false;
	for(auto it:m2)
	{
	//	cout<<it.first<<" "<<it.second<<' ';
		days+=it.first-prev;
	//	cout<<days<<" "<<prep[it.second-1]<<'\n';
		if(prep[it.second-1]>days)
		{
			return false;
		}
		else
		{
			days-=prep[it.second-1];
			prev=it.first+1;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int r;
		cin>>r;
		v.push_back(r);
	}
	for(int i=0;i<m;i++)
	{
		int r;
		cin>>r;
		prep.push_back(r);
	}
	int low,high,mid;
	low=0;high=n;
	while(low<high)
	{

		mid = low + (high - low)/2;
			//			cout<<low<<" "<<mid<<" "<<high<<'\n';
		if(possible(mid))
		{
			high=mid;
		}
		else
		{
			low=mid+1;
		}

	}
	if(high==0 || high==n)
	{
		cout<<"-1"<<'\n';
	}
	else
	{
		cout<<high+1<<'\n';
	}
}