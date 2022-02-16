/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;

#define newline cout << '\n';
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int tt; cin >> tt;
	while ( tt--)
	{
		string s;
		cin >> s;
		string tmp = s.substr(0,2);
		for ( int i = 3; i < s.size(); i+=2)
			tmp += s[i];
		cout << tmp;
		newline
	}
		
	return 0;
}
