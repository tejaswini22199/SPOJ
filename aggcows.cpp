#include <bits/stdc++.h>
using namespace std;
bool ispossible(long long int minimum,vector<long long int> &stall,long long int c)
{
	long long int i,n;
	n=stall.size();
	long long int m=1;
	long long int x=stall[0];
	for(i=1;i<n;i++)
	{
		if(stall[i]<x+minimum)
		continue;
		else
		{
			m++;
			x=stall[i];
		}
	}
	if(m>=c)
	return true;
	else
	return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,c,mid;
		cin>>n>>c;
		vector<long long int> stall(n);
		for(int i=0;i<n;i++)
		cin>>stall[i];
		sort(stall.begin(),stall.end());
		long long int low=1;
		long long int high=*max_element(stall.begin(),stall.end())-*min_element(stall.begin(),stall.end());
		while(low+1<high)
		{
			mid=(high+low)/2;
			if(ispossible(mid,stall,c))
			low=mid;
			else
			high=mid-1;
		}
		if(ispossible(high,stall,c))
		cout<<high<<endl;
		else if(ispossible(low,stall,c))
		cout<<low<<endl;
	}
	
	return 0;
}