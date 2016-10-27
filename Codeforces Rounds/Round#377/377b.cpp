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
	int n, k;
	cin>>n>>k;
	vector<int> previous;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		previous.push_back(x);
	}
	vector<int> current;
	current.resize(n);
	int ans = 0;
	current[0]=previous[0];
	for(int i=1;i<n;i++)
	{
		int r = k - previous[i] - current[i-1];
		if(r<0)r=0;
		ans+=r;
	//	cout<<k<<" "<<previous[i]<<" "<<current[i-1]<<'\n';
		current[i]=r+previous[i];
	}
	cout<<ans<<'\n';
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<previous[i]<<" ";
		}
		else
		{
			cout<<current[i]<<" ";
		}
	}
	return 0;
}	
