#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int fun(int);
int main()
{
	int n;
	cin>>n;
	cout<<fun(n);
}
 fun(int n)
 {
 	int i,j;
	int c[n+1];
	for(i=0;i<=n;i++){
	    if(i<=2)
	       c[i]=i;
	       else
			c[i]=c[i-1]+(i-1)*c[i-2];
		}
	return c[n];
}
