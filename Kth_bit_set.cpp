#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n;
	cin>>k;
	if(n&1<<k)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
