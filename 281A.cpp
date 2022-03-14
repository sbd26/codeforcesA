/*
 * Author : BD26
 * Ins    : Northern University of Bangladesh
 */

#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if ( 'a' <= s[0] && s[0] <= 'z')
		s[0] -= 32;
	cout << s;
	
	
	
	return 0;
}
