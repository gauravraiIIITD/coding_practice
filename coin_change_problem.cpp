#include<iostream>
#include<math.h> 
using namespace std; 
int coin(int coins[], int m, int k) 
{ 
	int a[k+1];
	a[0] = 0; 
	for (int i=1; i<=k; i++) 
		a[i] = INT_MAX; 
	for (int i=1; i<=k; i++) 
	{ 
		for (int j=0; j<m; j++) 
		if (coins[j] <= i) 
		{ 
			int x= a[i-coins[j]]; 
			if (x!= INT_MAX && x+ 1 < a[i]) 
				a[i] = x+ 1; 
		} 
	} 
	return a[k]; 
} 
int main() 
{ 
    int n,i;
    cin>>n;
    int coins[n];
    for(i=0;i<n;i++)
    {
    	cin>>coins[i];
	}
	int m = sizeof(coins)/sizeof(coins[0]); 
	int k;
	cin>>k; 
	cout<<coin(coins, m, k); 
	return 0; 
} 

