/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a,b,c,d;
	string s;
	int ans = 0;
	cin >> a >> b >> c >> d;
	cin >> s;
	for (int i = 0; i < s.size();i++)
	{
		if ( s[i] == '1')
		ans += a;
		if (s[i] == '2')
		ans += b;
		if(s[i] == '3')
		ans += c;
		if (s[i] == '4')
		ans += d;
	}
	cout << ans;
		
	
	
	
	return 0;
}
