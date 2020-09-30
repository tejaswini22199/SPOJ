#include <iostream>
using namespace std;
long long int fun(long long int n)
{
	long long int result=n;
	long long int i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			result=result/i;
			result=result*(i-1);
		}
		while(n%i==0)
		{
			n=n/i;
		}
	}
	if(n>1)
	{
	    result=result/n;
	    result=result*(n-1);
	}
	return result;
}
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<fun(n)<<endl;
	}
	return 0;
}