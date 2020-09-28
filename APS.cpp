#include <bits/stdc++.h>
using namespace std;

void fun(vector<long long int> &dp,vector<int> &p)
{
    long long int i,j;

		for(i=2;i<=10000000;i++)
		{
			if(p[i]==0)
			{
				for(j=i+i;j<=10000000;j+=i)
				{
					if(p[j]==0)
					p[j]=i;
				}
				dp[i]=dp[i-1]+i;
			}
			else
			dp[i]=dp[i-1]+p[i];
		}
}
int main() {
	int t;
	cin>>t;
   vector<long long int> dp(10000009,0);
   vector<int> p(10000009,0);
	fun(dp,p);
		while(t--)
		{
		long long int n;
		cin>>n;
		cout<<dp[n]<<endl;
		}
	return 0;
}