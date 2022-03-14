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
	int tt;
	cin >>tt >> s;
	int ans = 0;
	for ( int i = 0 ; i < s.size(); i++)
		if ( s[i] == s[i+1])
			ans++;
			
		cout << ans;
	
	
	
	return 0;
}
