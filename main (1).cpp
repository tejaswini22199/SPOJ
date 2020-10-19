/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t;
	cin>>t;
	long long int arr[t];
	for(long int i=0;i<t;i++)
		cin>>arr[i];
	long long int m=ceil(log2(t));
	int bitset[63];
	memset(bitset,0,sizeof(bitset));
	for(long int i=0;i<t;i++)
	{
		for(int j=0;j<63;j++)
		{
			long long int x=(1LL<<j);
			if(x&arr[i])
			bitset[j]++;
		}
	}
	long long int res=0;
	for(int i=0;i<63;i++)
	{
		if(bitset[i]!=0 && bitset[i]!=t)
		res|=(1LL<<i);
	}
	cout<<res<<endl;
	return 0;
}