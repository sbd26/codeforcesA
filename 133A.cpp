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
	string s;
	cin >> s;
	int flag = 0;
	for ( int i = 0; i < s.size(); i++)
	if ( s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
		flag = 1;
	if ( flag == 1)
		cout << "YES";
	else 
		cout << "NO";
	
	
	
	return 0;
}
