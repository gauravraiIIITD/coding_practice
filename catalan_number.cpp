#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int c[n+1];
	c[0]=c[1]=1;
	for(i=2;i<=n;i++){
		c[i]=0;
		for(j=0;j<i;j++){
			c[i]+=c[j]*c[i-j-1];
		}
	}
	cout<<c[n];
}
