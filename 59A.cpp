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
	int small = 0, big = 0;
	for ( int i = 0; i < s.size(); i++)
	{
		if ( 'a' <= s[i] && s[i]<= 'z' )
			small++;
		else 
			big++;
	}
	
	
	if ( small >= big )
	{
		for ( int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
		
		cout <<  s;
		return 0;
	}
	else {
		for ( int i = 0; i < s.size(); i++)
			s[i] = toupper(s[i]);
		cout << s;
		return 0;
	}
		
	
	
}
