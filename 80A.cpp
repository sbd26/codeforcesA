/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
	



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin >> n >> m;
	int flag = 0;
	for ( int i = n+1; i <= m; i++)
	{
		int ckr = prime(i);
		if ( ckr == 0){
			if (i == m)
				flag = 1;
			break;
		}
	}
	if ( flag == 1)
	cout << "YES" << endl;
	else 
	cout << "NO" << endl;		
	
	
	
	
	return 0;
}
