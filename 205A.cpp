/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include <climits>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; 
	cin >> tt;
	int ans = 0, low = INT_MAX,a;
	for ( int i = 1; i <= tt; i++)
	{
		cin >> a;
		
		if ( a < low){
			low = a;
			ans = i;
		}
		else if ( low == a)
			ans = 0;
			
			
		}
		
		(ans == 0) ? cout << "Still Rozdil" : cout << ans;
	
	return 0;
}
