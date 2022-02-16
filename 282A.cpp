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
	
	int tt;
	cin >> tt;
	int x = 0;
	while ( tt--)
	{
		string s;
		cin >>  s;
		if ( s[0] == '+' || s[1] == '+')
		++x;
		else if ( s[0] == '-' || s[1] == '-')
		--x;
	}
	cout << x; 
	
	
	return 0;
}
