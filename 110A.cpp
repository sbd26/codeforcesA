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
	string s;
	cin >> s;
	int cnt = 0;
	for ( int i = 0; i < s.size(); i++)
		if ( s[i] == '4' || s[i] == '7')
			cnt++;
	if ( cnt == 4 || cnt == 7)
		cout << "YES";
	else 
		cout << "NO";
		
	
	
	
	return 0;
}
