#include <bits/stdc++.h>
using namespace std;
void fun(vector<long long int> &dp)
{
	long long int i,sum,j;
	vector<long long int> p(1000009,1);
	for(i=2;i<=1000000;i++)
	{
	    for(j=i+i;j<=1000000;j+=i)
	    {
	    	p[j]+=i;
	    }
	}
	for(i=2;i<=1000000;i++)
	dp[i]=dp[i-1]+p[i];
}
int main() {
	int t;
	cin>>t;
	vector<long long int> dp(1000009,0);
	dp[0]=0;
	dp[1]=0;
	fun(dp);
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}