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
	int tmp = tt,x;
	cin >> tt;
	double   ans = 0.0,sum = 0.0;
	while ( tt--)
	{
		cin >> x;
		sum += x;
	}
	 ans = sum / tmp;
	 cout << ans;
	
	return 0;
}
