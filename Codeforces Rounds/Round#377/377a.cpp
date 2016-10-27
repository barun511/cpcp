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
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=9;i++)
	{
		int r = n*i%10;
		if(r==k || r==0)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"10";
	return 0;
}
