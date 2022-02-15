/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	
	int tt;
	cin >> tt;
	int ans = 0;
	while(tt)
	{
		if ( tt >= 100)
		{
			ans += tt / 100;
			tt %= 100;
		}
		else if ( tt >= 20)
		{
			ans += tt / 20;
			tt %= 20;
		}
		 else if ( tt >= 10)
		{
			ans += tt / 10;
			tt %= 10;
		}
		 else if ( tt >= 5)
		{
			ans += tt / 5;
			tt %= 5;
		}
		else if ( tt >= 1){
			ans += tt;
			break;
		}
		
	}
	cout << ans;
	
	return 0;
}
