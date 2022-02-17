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
	while (tt--)
	{
		int a; cin >> a;
		int ans = 0;
		int reminder = a % 10;
		ans = (reminder - 1) * 10;
			for ( int i = 1; a; i++)
			{
				 ans += i;
				 a /= 10;
			}
	cout << ans << endl;
}

	return 0;
}
