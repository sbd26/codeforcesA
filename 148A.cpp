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
	int a,b,c,d,total;
	int ans = 0;
	cin >> a >> b >> c >> d >> total;
	for ( int i = 1; i <= total; i++)
		if( i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0)
			ans++;
	cout << ans;
	
	
	
	return 0;
}
