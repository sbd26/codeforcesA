/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	int tt;
	cin >> tt;
	while(tt--)
	{
		int n,m;
		cin >> n >> m;
		cout << min(2,n-1) * m << endl;
	}
	
	
	return 0;
}
