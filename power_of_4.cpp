#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,k,count=0;
	cin>>n;
	int num_bits=sizeof(int)*8;
	for(int k=0;k<num_bits;k=k+2)
	{
	if(n&1<<k)
	count++;
    }
	if(count==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
