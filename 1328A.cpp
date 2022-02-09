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
	while ( tt--)
	{
		int a,b;
		cin >> a >> b;
		if ( a % b == 0) cout << 0 << endl;
		else cout << b - a % b << endl;
	}
	
	
	return 0;
}
