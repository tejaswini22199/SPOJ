#include <iostream>
#include <vector>
# include <cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int k=1;k<=t;k++)
	{
		
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int bitset[32];
		memset(bitset,0,sizeof(bitset));
		for(int i=0;i<32;i++)
		{
			for(int j=0;j<n;j++)
			{
				int x=(1<<i);
				if(arr[j]&x)
				bitset[i]++;
			}
		}
		long long int res=0;
		for(int i=0;i<32;i++)
		{
			res+=bitset[i]*(n-bitset[i]);
			if(res>10000007)
			res=res%10000007;
		}
		res=2*res;
		if(res>10000007)
		res=res%10000007;
		cout<<"Case "<<k<<": ";
		cout<<res<<endl;
	}
	return 0;
}