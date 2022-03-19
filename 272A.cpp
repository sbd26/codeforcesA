/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	int total = tt + 1 ,i;
	int ans = 0;
	
	while(tt--)
	{
		int x;
		cin >> x;
		ans += x;
	}
	int bb = 0;
	for ( i = 1; i<=5;i++)
		if ( (ans + i ) % total != 1)
			++bb;
			
	cout << bb;
			
	
		 
	
	
	
	return 0;
}
