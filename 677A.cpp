/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
using namespace std;


int main()
{
	
	int f,h;
	cin >> f >> h;
	int ans = 0;
	while(f--)
	{
		int a;
		cin >> a;
		if ( a <= h)
			ans += 1;
		else
			ans += 2;
		}
		cout << ans;
	
	
	return 0;
}
