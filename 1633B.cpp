/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while ( tt--)
	{
		string s;
		cin >> s;
		int zero = count(s[0],s.size(),'0');
		int one = count(s[0],s.size(),'1');
		if ( zero == one)
			cout << 0 << endl;
		else if ( zero < one )
			cout << zero << endl;
		else
			cout << one << endl;
	}
	
	
	
	return 0;
}
