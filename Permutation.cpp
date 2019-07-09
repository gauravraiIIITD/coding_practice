#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,k,i,j;
	cin>>n;
	cin>>k;
	int c[n+1][k+1];
	if(k>n)
	{
	cout<<"Not a valid Entry";
	return -1;
	}

	for(i=0;i<=n;i++){
	   for(j=0;j<=k;j++){
	 if(j==0)
	   c[i][j]=1;
	   c[i][j+1]=0;	
	}
  }
	for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){
			c[i][j]=(j*c[i-1][j-1])+c[i-1][j];
		}
	}
	cout<<c[n][k];
	
}
