/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;

int maxf(int a, int b)
{
	int c =(a > b) ? a : b;
		return c;
}

int minf(int a, int b)
{
	
	int c =( a < b) ? a :  b;
	return c;
}

int main()
{
	int tt;
	cin >> tt;
	vector <int> v(4);
	while ( tt--)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int maxaofb = maxf(a,b);
		int minaofb = minf(a,b);
		int maxcofd = maxf(c,d);
		int mincofd = minf(c,d);
		
		if ( maxaofb < mincofd || minaofb > maxcofd)
			cout << "NO" <<endl;
		else
			cout << "YES" << endl;
		}
		
	
	
	return 0;
}
