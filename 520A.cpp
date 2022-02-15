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
	string s;
	cin >> s;
	int a[26] = {0};
	for ( auto u : s)
	{
		char c = tolower(u);
		a[c-'a'] = 1;
	}
	int flag = 1;
	for ( int i = 0; i < 26; i++)
		if ( a[i] == 0){
			flag = 0;
			break;
		}
		
	(flag == 1) ? cout << "YES" : cout << "NO";
	
	
	return 0;
}
