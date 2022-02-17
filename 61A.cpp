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
	
	string a,b; cin >> a >> b;
	for ( int i = 0; i < a.size(); i++)
	{
		if ( a[i] == b[i])
			a[i] = '0';
		else 
			a[i] = '1';
		}
		cout << a;
	
	
	return 0;
}
