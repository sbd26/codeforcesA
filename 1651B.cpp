/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int tt;
	cin >> tt;
	while (tt--)
	{
		int n;
		cin >> n;
		if ( n > 19)
			cout << "NO" << endl;
		else 
		{
			cout << "YES" << endl;
			for ( int i = 0; i < n; i++){
				int ans = pow(3,i);
				cout << ans << " ";
			}
			cout << endl;
		}
	}
				
				
				
		
	
	
	
	return 0;
}
