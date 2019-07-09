#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,k,i,j;
	cin>>n;
	cin>>k;
	if(k>n)
	{
	cout<<"Not a valid Entry";
	return -1;
	}
	long long int c[n+1][k+1];
	for(j=0;j<n;j++)
	{
		c[0][j]=0;
	}
	for(i=0;i<n;i++)
	{
		c[i][0]=1;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){
			if(n==k){
				cout<<1;
				return 0;
			}
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	cout<<c[n][k];
}
